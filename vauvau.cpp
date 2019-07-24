#include <iostream>
using namespace std;

//이 집을 지키는 개들은 두 마리이다.
//두 마리 모두 일정한 주기를 가지고 공격적이었다가 순한 양으로 변하는 것을 반복한다.
//첫 번째 개는 A 분 동안 난폭하고 B 분 동안은 순한 양으로 변한다.두번 째 개는 C 분 동안 난폭하고 D 분 동안은 순한 양으로 변한다.
//세 아저씨들이 이 집에 도착하는 분이 주어질 때 각 아저씨들이 두마리 모두에게 공격 받으면 both, 한 마리에게만 공격 받으면 one, 공격 받지 않으면 none 을 출력하는 게 문제이다.

int main(int argc, char* argv) {
	int input[7] = { 0, };
	int i = 0, j = 0;

	while (cin >> i)
	{
		input[j] = i;
		j++;
	}
	
	int dogA_length = input[0] + input[1];
	int dogB_length = input[2] + input[3];


	int* dogA = new int[dogA_length]();
	int* dogB = new int[dogB_length]();

	for (int i = 1; i <= dogA_length; i++) {
		if(i <= input[0])
			dogA[i] = 1;
		else if(i >= input[0] + 1 && i <= (input[0] + input[1]))
			dogA[i] = 0;
	}
	
	for (int i = 1; i <= dogB_length; i++) {
		if (i <= input[2])
			dogB[i] = 1;
		else if (i >= input[2] + 1 && i <= (input[2] + input[3]))
			dogB[i] = 0;
	}

	int visitorA[3] = { 0, };
	int visitorB[3] = { 0, };
	
	for (int i = 0; i < 3; i++) {
		visitorA[i] = input[4 + i] % dogA_length;
		visitorB[i] = input[4 + i] % dogB_length;
	}

	for (int i = 0; i < 3; i++) {
		if (dogA[visitorA[i]] == 1 && dogB[visitorB[i]] == 1) {
			cout << "both" << endl;
		}
		else if (dogA[visitorA[i]] || 1 && dogB[visitorB[i]] == 1) {
			cout << "one" << endl;
		}
		else {
			cout << "none" << endl;
		}
	}
 
}