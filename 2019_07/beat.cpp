#include <iostream>
using namespace std;

//���ۺ� �����̳��̴�.�������� ���� �� ������ �̿��ؼ� ���� ��Ŀ�� ������ ���ھ ���ߴ� ������ �����ߴ�.
//�� �� ���� ������ �� �� ���� �־��� ��, �� ���� ������ �˾Ƴ��� ���̴�.

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