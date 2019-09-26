#include <iostream>
#include <set>
using namespace std;

int main() {
	int n = 0;
	set<int> s;
	cin >> n;

	while (n--) {
		int x = 0;
		cin >> x;
		s.insert(x);
	}

	for (auto x : s) {
		cout << x << ' ';
	}

	return 0;
}