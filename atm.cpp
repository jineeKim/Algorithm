#include <iostream>
using namespace std;

//ATM(Automated Teller Machine) �⿡�� X $ �� ���� �����ϰ��� �Ѵ�.�� ���� 5 �� ��� �ݾ� ���� ����Ѵ�.
//��, ������ �� ���� 0.5 $ �� �����Ḧ ����� �Ѵ�.�ŷ� ���� ���¿��� ���� �ݾ��� ����϶�.

int main(int argc, char* argv) {
	int num = 0;
	double balance = 0.0;

	cin >> num >> balance;

	cout << fixed;
	cout.precision(2);
	
	if ((num+0.5) > balance || num % 5 != 0) {	
		cout << balance;
	}
	else {
		balance -= (num + 0.5);
		cout << balance;
	}
}