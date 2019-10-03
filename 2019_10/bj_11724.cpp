#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node) {
	check[node] = true;
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (!check[next])
			dfs(next);
	}
}

int main() {
	int n = 0, m = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int u = 0, v = 0;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i);
			ans++;
		}
	}

	printf("%d", ans);
	return 0;
}