#include <stdio.h>
#define QUEUESIZE 100000

int q[2][QUEUESIZE];
int head, tail;

void push(int x, int y) {
	q[0][tail] = x;
	q[1][tail] = y;

	tail++;
	//tail %= QUEUESIZE;
}

void pop(int* x, int* y) {
	*x = q[0][head];
	*y = q[1][head];

	head++;
	//head %= QUEUESIZE;
}

int main() {
	char arr[103][103] = { 0, };
	int t = 0;
	int x = 0, y = 0;
	int k = 0;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		for (int j = 1; j <= t; j++) {
			scanf(" %c", &arr[i][j]);
			if (arr[i][j] == '1')
				arr[i][j] = 'B';
			else
				arr[i][j] -= 48;
		}
	}

	for (int i = 0; i < t + 2; i++) {
		for (int j = 0; j < t + 2; j++) {
			if (i == 0 || i == t + 1)
				arr[i][j] = 'B';
			else if (j == 0 || j == t + 1)
				arr[i][j] = 'B';	
		}
	}

	scanf("%d %d %d", &y, &x, &k);

	push(x, y);
	arr[x][y] = 1;

	while (head < tail) {
		pop(&x, &y);

		if (arr[x - 1][y] != 'B' && arr[x - 1][y] == 0) {
			arr[x - 1][y] = arr[x][y] + 1;
			push(x - 1, y);
		}
		if (arr[x + 1][y] != 'B' && arr[x + 1][y] == 0) {
			arr[x + 1][y] = arr[x][y] + 1;
			push(x + 1, y);
		}
		if (arr[x][y - 1] != 'B' && arr[x][y - 1] == 0) {
			arr[x][y - 1] = arr[x][y] + 1;
			push(x, y - 1);
		}
		if (arr[x][y + 1] != 'B' && arr[x][y + 1] == 0) {
			arr[x][y + 1] = arr[x][y] + 1;
			push(x, y + 1);
		}
	}

	int count = 0;
	for (int i = 1; i <= t; i++) {
		for (int j = 0; j <= t; j++) {
			if (arr[i][j] == k + 1)
				count++;
		}
	}

	if (count == 0)
		printf("OH, MY GOD");
	else
		printf("%d", count);

	return 0;
}