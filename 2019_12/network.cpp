#include <string>
#include <vector>

using namespace std;
vector <bool> check(201, false);
vector<vector<int>> a;

void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < check.size(); i++) {
		if (a[x][i] == 1 && check[i] == false) {
			dfs(i);
		}
	}
}
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;
	check.resize(n);
	a = computers;
	for (int i = 0; i < check.size(); i++) {
		if (!check[i]) {
			dfs(i);
			answer++;
		}
	}

	return answer;
}

int main() {
	vector<vector<int>> computers = { {1, 1, 0},{1, 1, 1},{0, 1, 1} };

	solution(3, computers);
	return 0;
}