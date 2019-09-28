#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0, m = 0;
	int i = 0, j = 0;
	vector<int> a;
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}

	while (m--) {
		cin >> i >> j;
		reverse(a.begin() + (i - 1), a.begin() + j);
	}

	for (auto x : a) {
		cout << x << ' ';
	}


	return 0;
}