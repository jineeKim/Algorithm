#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	for (int i = 1; i <= n; i++) {
		if (i % 2)
			answer += "��";
		else
			answer += "��";
	}
	return answer;
}

int main() {
	solution(3);
	return 0;
}