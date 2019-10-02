#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n = 0, k = 0;
	cin >> n >> k;
	vector<int> a(n, 0);

	for(int i=0; i<n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	cout << a[k-1] << '\n';

	return 0;
}