#include <string>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int p = 0, y = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'p' || s[i] == 'P') {
			p++;
		}
		else if (s[i] == 'y' || s[i] == 'Y') {
			y++;
		}
	}
	answer = p == y ? true : false;
	return answer;
}

int main() {
	string s="pPoooY";
	solution(s);
	return 0;
}