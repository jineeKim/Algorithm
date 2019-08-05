#include <iostream>
using namespace std;

//ATM(Automated Teller Machine) 기에서 X $ 의 돈을 인출하고자 한다.이 기계는 5 의 배수 금액 만을 취급한다.
//단, 인출할 때 마다 0.5 $ 의 수수료를 내어야 한다.거래 후의 계좌에서 남은 금액을 계산하라.

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