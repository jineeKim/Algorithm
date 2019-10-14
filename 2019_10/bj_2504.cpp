#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

string a;
stack<char> s;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> a;

	long long ans = 0;
	int tmp = 1;
	bool tf = false;

	for (int i = 0; i < a.size(); i++){
		if (a[i] == '(') {
			tmp *= 2;
			s.push('(');
		}
		else if (a[i] == '[') {
			tmp *= 3;
			s.push('[');
		}
		else if (a[i] == ')' && (s.empty() || s.top() != '(')) {
			tf = false;
			break;
		}
		else if (a[i] == ']' && (s.empty() || s.top() != '[')) {
			tf = false;
			break;
		}
		else if (a[i] == ')'){
			if (a[i - 1] == '(')
				ans += tmp;
			s.pop();
			tmp /= 2;
		}
		else if (a[i] == ']'){
			if (a[i - 1] == '[')
				ans += tmp;
			s.pop();
			tmp /= 3;
		}
	}

	if (tf||!s.empty()) {
		cout << 0 << "\n";
	}
	else {
		cout << ans << "\n";
	}

	return 0;
}