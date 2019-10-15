#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
bool check(vector<long long>a, long long mid, int m) {
	int n = a.size();
	long long cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] - mid > 0) {
			cnt += a[i] - mid;
		}
	}
	return cnt >= m;
}
int main() {
	scanf("%d %d", &n, &m);
	vector<long long> a(n, 0);
	long long l = 0;
	long long r = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (r < a[i]) {
			r = a[i];
		}
	}

	long long ans = 0;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(a, mid, m)) {
			ans = max(ans, mid);
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%lld\n", ans);
	return 0;
}