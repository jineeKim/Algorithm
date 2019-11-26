#include <iostream>
#include <string>
#include <vector>
#include<set>
using namespace std;

vector<int> solution(vector<string> maps) {
	vector<int> answer (2);
	set<int> d[26];
	int dx[4] = { 0, 0, 1, -1 };
	int dy[4] = { 1, -1, 0, 0 };
	int n = 0;

	for (int i = 0; i < maps.size(); i++) {
		for (int j = 0; j < maps[i].size(); j++) {
			if (maps[i][j] != '.') {
				for (int k = 0; k < 4; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];
					if (0 <= nx && nx < maps.size() && 0 <= ny && ny < maps[i].size()) {
						if (maps[nx][ny] != maps[i][j] && maps[nx][ny] != '.') {
							d[maps[i][j]-'A'].insert(maps[nx][ny]);
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		answer[0] += d[i].size();
		if (answer[1] < d[i].size())
			answer[1] = d[i].size();
	}
	answer[0] /= 2;
	

	return answer;
}

int main(void) {
	vector<string> a = {"..........","AAACC.....",".AAA.....Z","..AAAA..C.","...BBBBB..","....BBB...","...ZBBB...","ZZZZAAAC..",".....CCCC.","QQ......C.",".........." };
	vector<string> b = { "A.B.C.D", ".B.C.D." };

	solution(b);
	return 0;
}