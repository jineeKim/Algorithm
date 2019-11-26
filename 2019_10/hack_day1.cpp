#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> grade) {
	int ans = 0;
	for (int i = 1; i < grade.size(); i++) {
		if (grade[i - 1] > grade[i]) {
			ans += (grade[i - 1] - grade[i]);
		}
	}

	return ans;
}

int main(void) {
	vector<int> a = { 3,2,3,6,4,5 };
	cout << solution(a);
	return 0;
}