#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string input;
	cin >> input;

	int n = input.size();
	int cnt = 0;

	stack<int> s;

	for (int i = 0; i < n; i++) {
		if (input[i] == '(') {
			s.push(i);
		}
		else {
			if (s.top() + 1 == i) {
				s.pop();
				cnt += s.size();
			}
			else {
				s.pop();
				cnt += 1;
			}
		}
	}

	cout << cnt << '\n';
	return 0;
}