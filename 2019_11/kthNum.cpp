#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int> > commands) {
	vector<int> answer;
	vector<int> copyVector(array.size(), 0);
	for (int i = 0; i < commands.size(); i++) {
		copyVector.assign(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
		sort(copyVector.begin(), copyVector.end());
		answer.push_back(copyVector[commands[i][2]-1]);
	}

	return answer;
}

int main() {
	vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int> > commands = { {2, 5, 3},{4, 4, 1},{1, 7, 3} };
	
	solution(array, commands);

}