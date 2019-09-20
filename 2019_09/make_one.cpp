#include <iostream>
using namespace std;
int d[1000];

int go(int n) {
	if (n == 1)
		return 0;
	if (d[n] > 0)
		return d[n];
	d[n] = go(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = go(n / 2) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = go(n / 3) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	return d[n];
}
int main() {
	std::ios::sync_with_stdio(false);

	unsigned int n = 0;
	cin >> n;

	cout << go(n);

}