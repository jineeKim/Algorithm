#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<long long>a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int cnt = 1;
	long long ans = a[0];
	int ans_cnt = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1])
			cnt++;
		else
			cnt = 1;
		if (ans_cnt < cnt) {
			ans_cnt = cnt;
			ans = a[i];
		}
	}
	cout << ans;
	return 0;
}