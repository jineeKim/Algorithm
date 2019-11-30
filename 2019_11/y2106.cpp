#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	int m[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	string d[7] = { "FRI","SAT", "SUN","MON","TUE","WED","THU" };
	int total = 0;
	
	for (int i = 0; i < a-1; i++) {
		total += m[i];
	}

	total += (b-1);
	answer += d[total % 7];
	return answer;
}

int main() {

	solution(5, 24);
	return 0;
}