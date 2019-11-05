#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(const string &a, const string &b) {
	return a+b > b+a;
}
string solution(vector<int> numbers) {
	string answer = "";
	vector<string> v;
	for (int x : numbers) {
		v.push_back(to_string(x));
	 }
	sort(v.begin(), v.end(), cmp);
	for (auto x : v) {
		answer += x;
	}
	if (answer[0] == '0')
		return "0";

	return answer;
}

int main() {
	vector<int> numbers = { 3, 30, 34, 5, 9 };
	solution(numbers);

	return 0;
}