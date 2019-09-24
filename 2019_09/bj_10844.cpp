#include <iostream>
using namespace std;

int mod = 1000000000;

int main() {
	int n = 0;
	int d[101][10] = { 0, };
	cin >> n;
	
	for (int i = 1; i <= 9; i++)
		d[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			//d[i][j] = 0;
			if (j - 1 >= 0)
				d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9)
				d[i][j] += d[i - 1][j + 1];
			d[i][j] %= mod;
		}

	}

	long long ans = 0;
	for (int i = 0; i <= 9; i++)
		ans += d[n][i];

	ans %= mod;
	cout << ans << endl;

	return 0;
}