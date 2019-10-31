#include <string>
#include <vector>
using namespace std;
int max(int a, int b) {
	return a > b ? a : b;
}
vector<int> solution(vector<int> answers) {
	vector<int> v(3, 0);
	vector<int> a = { 1,2,3,4,5 };
	vector<int> b = { 2,1,2,3,2,4,2,5 };
	vector<int> c = { 3,3,1,1,2,2,4,4,5,5 };
	
	for (int i = 0; i < answers.size(); i++) {
		if (answers[i] == a[i % 5])	v[0]++;
		if (answers[i] == b[i % 8])	v[1]++;
		if (answers[i] == c[i % 10])v[2]++;
	}

	int maxScore = 0;
	maxScore = max(max(v[0], v[1]), v[2]);


	vector<int> ans;
	for (int i = 0; i < 3; i++) {
		if (maxScore == v[i]) {
			ans.push_back(i + 1);
		}
	}

	return ans;
}

int main() {
	vector<int> a = { 1,3,2,4,2 };
	solution(a);

	return 0;
}