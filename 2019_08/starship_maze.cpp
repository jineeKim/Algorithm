#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
vector<vector<int>> maze;
vector<int> visited;
int n, m;

void recursive(int parm) {
	for (int i = 1; i <= n; i++) {
		if (maze[parm][i] == 1 && visited[i] == 0) {
			printf("%d ", i);
			visited[i] = 1;
			recursive(i);
		}
	}
}

int main() {
	int a = 0, b = 0;

	scanf("%d %d", &n, &m);
	maze = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
	visited = vector<int>(100001, 0);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		maze[a][b] = 1;
		maze[b][a] = 1;
	}

	visited[1] = 1;
	printf("1 ");

	recursive(1);


	return 0;
}