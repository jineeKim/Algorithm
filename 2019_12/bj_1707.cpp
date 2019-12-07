#include <stdio.h>
#include <vector>

using namespace std;

vector<int> a[2001];
vector<int> check(2001, 0);

void dfs(int x, int c) {
	check[x] = c;

	for (int i = 0; i < a[x].size(); i++) {
		if (check[a[x][i]] == 0) {
			dfs(a[x][i], 3-i);
		}
	}

}
int main() {
	int k = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		int  n = 0, m = 0;
		scanf("%d %d", &n, &m);

		for (int j = 1; j <= n; j++) {
			check[j] = 0;
			a[j].clear();
		}

		for (int j = 0; j < m; j++) {
			int u = 0, v = 0;
			scanf("%d %d", &u, &v);

			a[u].push_back(v);
			a[v].push_back(u);
		}

		for (int j = 1; j <= n; j++) {
			if (check[j] == 0) {
				dfs(j, 1);
			}
		}
		bool ok = true;
		for (int j = 1; j <= n; j++) {
			for (int k = 0; k < a[j].size(); k++) {
				if (check[j] == check[a[j][k]]) {
					ok = false;
				}
			}
		}

		printf("%s\n", ok ? "YES" : "NO");

	}

	return 0;
}