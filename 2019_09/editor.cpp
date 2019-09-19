#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	
	stack<char> left, right;
	string s;
	cin >> s;
	int slen = s.size();

	for (int i = 0; i < slen; i++) {
		left.push(s[i]);
	}

	int n = 0;
	cin >> n;

	while (n--)	{
		char com;
		cin >> com;

		if (com == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (com == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (com == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (com == 'P') {
			char c = 0;
			cin >> c;
			left.push(c);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

	cout << '\n';


	return 0;
}