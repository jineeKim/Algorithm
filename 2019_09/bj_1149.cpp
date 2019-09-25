#include <iostream>
#define min(a, b) ((a<b)? (a):(b))

using namespace std;

int a[1001][3];
int d[1001][3];

int main() {
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}

	for (int i = 1; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
	}

	long long ans=0;
	ans = min(d[n][0], min(d[n][1], d[n][2]));

	cout << ans << '\n';

	return 0;
}