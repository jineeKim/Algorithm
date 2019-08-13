#include <stdio.h>
#include <iostream>

#define QUEUESIZE 1000000

int q[2][QUEUESIZE];
int head, tail;

int arr[1002][1002];
int knight[1002][1002];
int horse[1002][1002];

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
	//head += QUEUESIZE;
}
int main() {
	int n = 0, k = 0;
	int x = 0, y = 0;
	int cx = 0, cy = 0;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("\n%d", &arr[i][j]);
			if (arr[i][j] == 1) {
				arr[i][j] = 'X';
				knight[i][j] = -1;
				horse[i][j] = -1;
			}
		}
	}

	scanf("%d %d", &x, &y);
	cx = x;
	cy = y;

	push(x, y);
	knight[x][y] = 1;

	while (head < tail) {
		pop(&x, &y);

		if (head % (n * n) == n * n - 1)
			break;
		if (x + 1 <= n && y + 2 <= n && arr[x + 1][y + 2] != 'X' && knight[x + 1][y + 2] == 0) {
			knight[x + 1][y + 2] = knight[x][y] + 1;
			push(x + 1, y + 2);
		}
		if (x - 1 > 0 && y + 2 <= n && arr[x - 1][y + 2] != 'X' && knight[x - 1][y + 2] == 0) {
			knight[x - 1][y + 2] = knight[x][y] + 1;
			push(x - 1, y + 2);
		}
		if (x + 1 <= n && y - 2 > 0 && arr[x + 1][y - 2] != 'X' && knight[x + 1][y - 2] == 0) {
			knight[x + 1][y - 2] = knight[x][y] + 1;
			push(x + 1, y - 2);
		}
		if (x - 1 > 0 && y - 2 > 0 && arr[x - 1][y - 2] != 'X' && knight[x - 1][y - 2] == 0) {
			knight[x - 1][y - 2] = knight[x][y] + 1;
			push(x - 1, y - 2);
		}

		if (x + 2 <= n && y + 1 <= n && arr[x + 2][y + 1] != 'X' && knight[x + 2][y + 1] == 0) {
			knight[x + 2][y + 1] = knight[x][y] + 1;
			push(x + 2, y + 1);
		}
		if (x - 2 > 0 && y + 1 <= n && arr[x - 2][y + 1] != 'X' && knight[x - 2][y + 1] == 0) {
			knight[x - 2][y + 1] = knight[x][y] + 1;
			push(x - 2, y + 1);
		}
		if (x + 2 <= n && y - 1 > 0 && arr[x + 2][y - 1] != 'X' && knight[x + 2][y - 1] == 0) {
			knight[x + 2][y - 1] = knight[x][y] + 1;
			push(x + 2, y - 1);
		}
		if (x - 2 > 0 && y - 1 > 0 && arr[x - 2][y - 1] != 'X' && knight[x - 2][y - 1] == 0) {
			knight[x - 2][y - 1] = knight[x][y] + 1;
			push(x - 2, y - 1);
		}

	}

	x = cx;
	y = cy;

	//head = 0;

	push(x, y);
	horse[x][y] = 1;

	while (head < tail) {
		pop(&x, &y);

		if (x + 1 <= n && y + 2 <= n && arr[x + 1][y + 2] != 'X' && arr[x][y + 1] != 'X' && horse[x + 1][y + 2] == 0) {
			horse[x + 1][y + 2] = horse[x][y] + 1;
			push(x + 1, y + 2);
		}
		if (x - 1 > 0 && y + 2 <= n && arr[x - 1][y + 2] != 'X' && arr[x][y + 1] != 'X' && horse[x - 1][y + 2] == 0) {
			horse[x - 1][y + 2] = horse[x][y] + 1;
			push(x - 1, y + 2);
		}
		if (x + 1 <= n && y - 2 > 0 && arr[x + 1][y - 2] != 'X' && arr[x][y - 1] != 'X' && horse[x + 1][y - 2] == 0) {
			horse[x + 1][y - 2] = horse[x][y] + 1;
			push(x + 1, y - 2);
		}
		if (x - 1 > 0 && y - 2 > 0 && arr[x - 1][y - 2] != 'X' && arr[x][y - 1] != 'X' && horse[x - 1][y - 2] == 0) {
			horse[x - 1][y - 2] = horse[x][y] + 1;
			push(x - 1, y - 2);
		}

		if (x + 2 <= n && y + 1 <= n && arr[x + 2][y + 1] != 'X' && arr[x + 1][y] != 'X' && horse[x + 2][y + 1] == 0) {
			horse[x + 2][y + 1] = horse[x][y] + 1;
			push(x + 2, y + 1);
		}
		if (x - 2 > 0 && y + 1 <= n && arr[x - 2][y + 1] != 'X' && arr[x - 1][y] != 'X' && horse[x - 2][y + 1] == 0) {
			horse[x - 2][y + 1] = horse[x][y] + 1;
			push(x - 2, y + 1);
		}
		if (x + 2 <= n && y - 1 > 0 && arr[x + 2][y - 1] != 'X' && arr[x + 1][y] != 'X' && horse[x + 2][y - 1] == 0) {
			horse[x + 2][y - 1] = horse[x][y] + 1;
			push(x + 2, y - 1);
		}
		if (x - 2 > 0 && y - 1 > 0 && arr[x - 2][y - 1] != 'X' && arr[x - 1][y] != 'X' && horse[x - 2][y - 1] == 0) {
			horse[x - 2][y - 1] = horse[x][y] + 1;
			push(x - 2, y - 1);
		}

	}

	int count = 0;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (horse[i][j] == 0 && knight[i][j] != 0)
				count++;
			else if (knight[i][j] < horse[i][j])
				count++;
		}
	}

	printf("%d", count);


	return 0;
}
