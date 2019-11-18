#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	int size = board.size();
	vector<vector<int>> arr;
	stack<int> s;
	arr.assign(size, vector<int>(size));

	for (int i = 0; i < moves.size(); i++) {
		moves[i] -= 1;
	}

	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
			arr[j][i] = board[i][j];
		}
	}

	for (int x : moves) {
		for (int i = 0; i<arr.size(); i++) {
			if (arr[x][i] > 0) {
				if (!s.empty() && s.top() == arr[x][i]) {
					answer += 2;
					s.pop();
				}
				else {
					s.push(arr[x][i]);
				}
				arr[x][i] = -1;
				break;
			}
			else if (arr[x][i] == 0) {
				continue;
			}
		}
	}

	return answer;
}

int main() {

	vector<vector<int>> board = {
		{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}
	};
	vector<int> moves = { 1,5,3,5,1,2,1,4 };
	solution(board, moves);
	return 0;
}