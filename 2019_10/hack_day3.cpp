#include <string>
#include <vector>
using namespace std;

int solution(string command, vector<string> buttons, vector<int> scores) {
	int answer = command.size();
	vector<int>a[101];
	for (int i = 0; i < buttons.size(); i++) {
		if (command.find(buttons[i]) != string::npos) {
			a[i].push_back(scores[i]);
			a[i].back()+= command.size() - buttons[i].size();
			for (int j = i+1; j < buttons.size(); j++) {
				if (command.find(buttons[j]) != string::npos) {
					if (command.size() - buttons[i].size() > buttons[j].size()) {
						a[i].push_back(scores[i] + scores[j]);
						a[i].back() += command.size() - buttons[i].size() - buttons[j].size();
					}
					
				}
			}
		}
	}

	
	for (int i = 0; i < buttons.size(); i++) {
		for (int j = 0; j < a[i].size(); j++) {
			if (answer < a[i][j])
				answer = a[i][j];
		}
	}

	return answer;
}

int main(void) {
	vector<string> btn = { "BCXY" };
	vector<int> a = { 2 };
	string c = "ABCXYZ";
	solution(c, btn, a);
	return 0;
}