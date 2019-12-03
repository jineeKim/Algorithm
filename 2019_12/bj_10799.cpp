#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main() {
	int cnt = 0;
	stack <int> stack;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			stack.push(i);
		else {
			if (stack.top()+1 == i) {
				stack.pop();
				cnt += stack.size();
			}
			else {
				stack.pop();
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}