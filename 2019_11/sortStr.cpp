#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector <string> v;
	vector<pair<string, string> > answer(strings.size());

	for (int i = 0; i < strings.size(); i++) {
		answer[i].first = strings[i].at(n);
		answer[i].second = strings[i];
	}
	sort(answer.begin(), answer.end());
	
	for (int i = 0; i < strings.size(); i++) {
		v.push_back(answer[i].second);
	}

	return v;
}

int main() {
	vector<string> strings = { "abce", "abcd", "cdx"};
	int n = 2;
	solution(strings, n);
	return 0;
}