#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	string s1 = to_string(a) + to_string(b);
	string s2 = to_string(c) + to_string(d);

	long long ans = 0;
	ans = stoll(s1) + stoll(s2);

	cout << ans;


	return 0;
}