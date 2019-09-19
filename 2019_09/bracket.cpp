#include <iostream>
#include <string>

using namespace std;

string valid(string s) {
	int cnt = 0; 

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			cnt+=1;
		}
		else {
			cnt-=1;
		}
		if (cnt < 0) {
			return "NO";
		}
	}

	if (cnt == 0) {
		return "YES";
	}
	else if (cnt > 0) {
		return "NO";
	}
	
}

int main() {
	std::ios::sync_with_stdio(false);

	int n = 0;

	cin >> n;
	while(n--) {
		string t;
		cin >> t;
		cout << valid(t) << '\n';
	}

	return 0;
}