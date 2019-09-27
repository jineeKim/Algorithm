#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n = 0, m = 0;
	map<string, int> d;

	cin >> n >> m;

	while (n--) {
		string name;
		cin >> name;
		d[name] += 1;
	}

	while (m--) {
		string name;
		cin >> name;
		d[name] += 1;
	}

	int ans = 0;
	for (auto p : d) {
		if (p.second == 2)
			ans++;
	}

	cout << ans << '\n';

	for (auto p : d) {
		if (p.second == 2)
			cout << p.first << '\n';
	}

	return 0;
}