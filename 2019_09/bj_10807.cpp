#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0, x = 0, v = 0;
	vector<int> a;
	cin >> n;
	while(n--) {
		cin >> x;
		a.push_back(x);
	}
	cin >> v;
	cout << count(a.begin(), a.end(), v);

	return 0;
}