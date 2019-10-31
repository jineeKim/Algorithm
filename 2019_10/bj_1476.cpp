#include <iostream>
using namespace std;

int main() {
	int e = 0, s = 0, m = 0;
	cin >> e >> s >> m;
	int a = 1, b = 1, c = 1;
	
	for (int i = 1; ; i++) {
		if (e == a && s == b && m == c) {
			cout << i;
			break;
		}
		a++;
		b++;
		c++;
		if (a == 16) {
			a = 1;
		}if (b == 29) {
			b = 1;
		}if (c == 20) {
			c = 1;
		}
	}

	return 0;
}