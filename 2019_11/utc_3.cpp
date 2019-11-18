#include <string>
#include <vector>

using namespace std;

vector<bool> solution(vector<string> infos, vector<string> actions) {
	vector<bool> answer;
	bool A = true, O = false;
	int L = 0;
	for (int i = 0; i < actions.size(); i++) {
		string act = actions[i].substr(0, 1);
		if (act == "L") {
			for (int j = 0; j < infos.size(); j++) {
				if (infos[j] == actions[i].substr(6) && L==0) {
					L++;
					break;
				}
			}
			if(L>1)
			answer.push_back(false);
		}
		
		else if (act == "A") {
			if (L == true) {
				A = true;
				answer.push_back(true);
			}
			else {
				A = false;
				answer.push_back(false);
			}
		}
		else if (act == "O") {
			if (L == true && A == true) {
				answer.push_back(true);
			}
			else {
				answer.push_back(false);
			}
		}
	}
	return answer;
}

int main() {

	{ false, false, false, true, false, false, false, false, false, false }
	{ false, false, false, true, false, true, true, false, true, true }
	return 0;
}