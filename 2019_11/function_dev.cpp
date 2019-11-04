#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	vector<int> max(progresses.size(), 0);
	float temp = 0;
	int x = 0;
	int cnt = 1;

	for (int i = 0; i < progresses.size(); i++) {
		temp = speeds[i];
		temp = (100 - progresses[i]) / temp;
		x = (int)ceil(temp);
		max[i] = x;
	}

	x = max[0];
	for (int i = 1; i < max.size(); i++) {
		if (x >= max[i]) {
			cnt++;
		}
		else {
			answer.push_back(cnt);
			cnt = 1;
			x = max[i];
		}
	}
	answer.push_back(cnt);

	return answer;
}

int main() {
	vector<int> progresses = { 40, 93, 30, 55, 60, 65 };
	vector<int> speeds = { 60, 1, 30, 5, 10, 7 };
	solution(progresses, speeds);
	return 0;
}