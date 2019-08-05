#include <iostream>
using namespace std;

//�� ���� ��Ű�� ������ �� �����̴�.
//�� ���� ��� ������ �ֱ⸦ ������ �������̾��ٰ� ���� ������ ���ϴ� ���� �ݺ��Ѵ�.
//ù ��° ���� A �� ���� �����ϰ� B �� ������ ���� ������ ���Ѵ�.�ι� ° ���� C �� ���� �����ϰ� D �� ������ ���� ������ ���Ѵ�.
//�� ���������� �� ���� �����ϴ� ���� �־��� �� �� ���������� �θ��� ��ο��� ���� ������ both, �� �������Ը� ���� ������ one, ���� ���� ������ none �� ����ϴ� �� �����̴�.

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