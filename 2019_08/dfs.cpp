#include <stdio.h>

int table[12][12];
int visited[12];
int vn = 0, sn = 0;

void recursive(int parm) {
	for (int i = 1; i <= vn; i++) {
		if (table[parm][i] == 1 && visited[i] == 0) {
			printf("%d ", i);
			visited[i] = 1;
			recursive(i);
		}
	}
}

int main() {
	int from = 0, to = 0;

	scanf("%d %d", &vn, &sn);

	while (scanf("%d %d", &from, &to) != -1) {
		table[from][to] = 1;
		table[to][from] = 1;
	}

	visited[sn] = 1;
	printf("%d ", sn);
	recursive(sn);

	return 0;
}