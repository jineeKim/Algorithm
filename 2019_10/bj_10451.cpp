#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int a[1001];
bool check[1001];
void dfs(int x) {
	if (check[x])
		return;
	check[x] = true;
	dfs(a[x]);
}
int main() {
	int t = 0, n = 0;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			check[i] = false;
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				dfs(i);
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}