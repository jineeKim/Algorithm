#include <iostream>
using namespace std;

int main() {
	int t = 0, num = 0;
	int d[11] = { 0, };

	d[0] = 1;

	for (int i = 1; i <= 10; i++) {
		if (i - 1 >= 0) {
			d[i] += d[i - 1];
		}
		if (i - 2 >= 0) {
			d[i] += d[i - 2];
		}
		if (i - 3 >= 0) {
			d[i] += d[i - 3];
		}
	}

	cin >> t;
	while (t--) {
		cin >> num;
		cout << d[num] << endl;
	}

	return 0;
}