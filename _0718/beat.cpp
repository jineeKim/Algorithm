#include <iostream>
using namespace std;

//수퍼볼 선데이날이다.전반전이 끝난 후 막간을 이용해서 지역 해커는 게임의 스코어를 맞추는 게임을 제안했다.
//즉 두 팀의 점수의 합 과 차가 주어질 때, 두 팀의 점수를 알아내는 것이다.

int main(int argc, char* argv) {
	int a, b;
	int teamA, teamB;
	cin >> a >> b;

	teamA = (a + b) / 2;
	teamB = a - teamA;

	if (teamB < 0 || (a + b) % 2 != 0) {
		cout << "impossible" << endl;
	}
	else {
		cout << teamA << " " << teamB <<endl;
	}
	
}