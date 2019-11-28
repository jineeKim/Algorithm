#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	for (int i = heights.size() - 1; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			if (heights[i] < heights[j]) {
				answer.push_back(j+1);
				heights[i] = 0;
				break;
			}
			else if (j == 0) {
				answer.push_back(0);
			}
		}
	}
	reverse(answer.begin(), answer.end());
	return answer;
}

int main() {
	vector<int> heights = { 6,9,5,7,4 };
	solution(heights);
	return 0;
}