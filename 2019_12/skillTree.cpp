#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	if (skill.size() == 1) {
		for (int i = 0; i < skill_trees.size(); i++) {
			if (skill_trees[i].find(skill)>=0) {
				answer++;
			}
		}
	}
	else {
		for (int i = 0; i < skill_trees.size(); i++) {
			vector<int> find(skill.size(), 0);
			find[0] = skill_trees[i].find(skill[0]);
			if (find[0] == -1)
				continue;

			for (int j = 1; j < skill.size(); j++) {
				find[j] = skill_trees[i].find(skill[j]);
				if (find[j - 1] < find[j] ) {

					answer++;
					break;
				}
			}
		}
	}

	return answer;
}

int main() {
	string skill = "CBD";
	vector<string> skill_trees = { "CADF", "AEB" };
	solution(skill, skill_trees);
	return 0;
}