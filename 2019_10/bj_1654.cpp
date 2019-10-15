#include <cstdio>
long long v[10001];
int k, n ;

bool check(long long x) {
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += v[i] / x;
	}
	return cnt >= n;
}

int main() {
	scanf("%d %d", &k, &n);
	
	long long max = 0;
	for (int i = 0; i < k; i++) {
		scanf("%lld", &v[i]);
		if (max < v[i]) {
			max = v[i];
		}
	}
	long long ans = 0;
	long long l = 1;
	long long r = max;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid)) {
			if (ans < mid) {
				ans = mid;
			}
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%lld\n", ans);
	return 0;

	return 0;
}