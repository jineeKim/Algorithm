#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> v(3, 0);
	vector<int> a = { 1,2,3,4,5 };
	vector<int> b = { 2,1,2,3,2,4,2,5 };
	vector<int> c = { 3,3,1,1,2,2,4,4,5,5 };
	int j = 0;
	for (int i = 0; i < answers.size(); i++) {
		j = i % (a.size() - 1);
		if (answers[i] == a[j]) {
			v[0]++;
		}
	}
	for (int i = 0; i < answers.size(); i++) {
		j = i % (b.size() - 1);
		if (answers[i] == b[j]) {
			v[1]++;
		}
	}
	for (int i = 0; i < answers.size(); i++) {
		j = i % (c.size() - 1);
		if (answers[i] == c[j]) {
			v[2]++;
		}
	}
	vector<int> ans;
	int max = -1;
	for (int i = 0; i < 3; i++) {
		if (max < v[i]) {
			max = v[i];
			ans.push_back(i+1);
		}
		else if (max == v[i])
			ans.push_back(i+1);
	}

	return ans;
}

int main() {
	vector<int> a = { 6 };
	solution(a);

	return 0;
}