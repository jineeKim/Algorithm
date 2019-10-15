#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
bool check(vector<int> &a, int c, int mid) {
	int cnt = 1;
	int last = a[0];
	for (auto x : a) {
		if (x - last >= mid) {
			cnt++;
			last = x;
		}
	}
	return cnt >= c;
}
int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a.begin(), a.end());

	int l = 1;
	int r = a[n - 1] - a[0];
	int ans = 0;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (check(a, c, mid)) {
			if (ans < mid)
				ans = mid;
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%d", ans);
	return 0;
}