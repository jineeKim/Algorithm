#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0, m = 0;
	int i = 0, j = 0, k = 0;
	
	cin >> n >> m;
	vector<int> a(n, 0);

	while (m--) {
		cin >> i >> j >> k;
		fill(a.begin() + (i - 1), a.begin() + j, k);
	}

	for (auto x : a) {
		cout << x << ' ';
	}


	return 0;
}