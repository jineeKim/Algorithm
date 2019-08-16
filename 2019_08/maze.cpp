#include <stdio.h>
#define QUEUESIZE 10000

int queu[2][QUEUESIZE];
char table[21][21];
int n, m;
int head, tail;

void push(int x, int y) {
	queu[0][tail] = x;
	queu[1][tail] = y;
	tail++;
}

void pop(int *x, int *y) {
	*x = queu[0][head];
	*y = queu[1][head];
	head++;
}

int main() {
	int x = 0, y = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i <= n+1; i++) {
		for (int j = 0; j <= m+1; j++) {

			if (i == 0 || i == n+1) {
				table[i][j] = '1';
			}
			else if (j == 0 || j == m+1){
				table[i][j] = '1';
			}
			else {
				scanf("\n%c", &table[i][j]);

			}

		}
		
	}

	push(n, 1);
	table[n][1] = '1';

	while (head < tail) {
		pop(&x, &y);

		if (x == 1 && y == m)
			break;
		if (table[x + 1][y] == '0') {
			push(x + 1, y);
			table[x + 1][y] = table[x][y] + 1;
		}
		if (table[x - 1][y] == '0') {
			push(x - 1, y);
			table[x - 1][y] = table[x][y] + 1;
		}
		if (table[x][y + 1] == '0') {
			push(x, y + 1);
			table[x][y + 1] = table[x][y] + 1;
		}
		if (table[x][y - 1] == '0') {
			push(x, y - 1);
			table[x][y - 1] = table[x][y] + 1;
		}
	}
	
	if (table[1][m] == 0)
		printf("-1");
	else
		printf("%d", table[1][m] -48);

	return 0;
}