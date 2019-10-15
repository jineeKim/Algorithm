#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
vector<pair<int, int>> v[10001];
bool c[10001];
int n, m;
int st, ed;
bool check(int st, int mid) {
	if (c[st]) {
		return false;
	}
	c[st] = true;
	if (st == ed) {
		return true;
	}
	for (auto &p : v[st]) {
		int next = p.first;
		int cost = p.second;
		if (cost >= mid) {
			if (check(next, mid)) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d %d %d", a, b, c);
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	scanf("%d %d", &st, &ed);
	int l, r;
	l = 1;
	r = 1000000000;
	int ans = 0;
	while(l <= r) {
		int mid = (l + r) / 2;
		memset(c, false, sizeof(c));
		if (check(st, mid)) {
			ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}

	return 0;
}