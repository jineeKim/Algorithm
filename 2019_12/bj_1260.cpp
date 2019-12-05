#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> a[1001];
vector<bool> check(1001);
queue<int> q;

void dfs(int x) {
	check[x] = true;
	printf("%d ", x);
	for (int i = 0; i < a[x].size(); i++) {
		if (!check[a[x][i]]) {
			dfs(a[x][i]);
		}
	}
}

void bfs(int s) {
	q.push(s);
	check[s] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);

		for (int i = 0; i < a[x].size(); i++) {
			if (!check[a[x][i]]) {
				q.push(a[x][i]);
				check[a[x][i]] = true;
			}
		}

	}
}

int main() {
	int n = 0, m = 0, s = 0;
	
	scanf("%d %d %d", &n, &m, &s);

	for (int i = 0; i < m; i++) {
		int u = 0, v = 0;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(s);

	for (int i = 0; i < check.size(); i++) {
		check[i] = false;
	}
	printf("\n");
	
	bfs(s);
	
	
	return 0;
}