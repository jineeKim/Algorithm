#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	string s;

	cin >> s;
	int slen = s.size();
	for (int i = 97; i <= 122; i++) {
		int cnt = 0;
		for (int j = 0; j < slen; j++) {
			if (s[j] == i) {
				cnt++;
			}
		}
		cout << cnt << ' ';
	}

	return 0;
}