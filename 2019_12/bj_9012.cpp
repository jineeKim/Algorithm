#include <string>
#include <iostream>

using namespace std;

string vaild(string s) {
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			cnt++;
		}
		else if (s[i] == ')') {
			cnt--;
		}
		if (cnt < 0) {
			return "NO";
		}
	}
	if (cnt == 0)
		return "YES";
	else
		return "NO";
}
int main() {
	int n = 0;
	scanf("%d", &n);
	while (n > 0) {
		string s;
		cin >> s;
		cout << vaild(s) << '\n';
		n--;
	}

	return 0;
}