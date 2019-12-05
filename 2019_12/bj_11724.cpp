#include <stdio.h>
#include <vector>

using namespace std;

vector<int> a[1001];
vector<bool> check(1001);

void dfs(int x) {
	check[x] = true;

	for (int i = 0; i < a[x].size(); i++) {
		if (!check[a[x][i]]) {
			check[a[x][i]] = true;
			dfs(a[x][i]);
		}
	}
}

int main() {
	int n = 0, m = 0, cnt = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int u = 0, v = 0;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	check.resize(n+1);

	for (int i = 1; i < check.size(); i++) {
		if (!check[i]) {
			dfs(i);
			cnt ++;
		}
	}
	printf("%d", cnt);

	return 0;
}