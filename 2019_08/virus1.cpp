#include <stdio.h>

int table[102][102];
int visited[102];
int count;
int n, cn;
int from, to;

void recursive(int param) {
	for (int i = 1; i <= n; i++) {
		if (table[param][i] == 1 && visited[i] == 0) {
			count++;
			visited[i] = 1;
			recursive(i);
		}
	}

}
int main() {

	scanf("%d\n%d", &n, &cn);

	while (scanf("%d %d", &from, &to) != -1) {
		table[from][to] = 1;
		table[to][from] = 1;
	}

	visited[1] = 1;
	recursive(1);

	printf("%d", count);

	return 0;
}