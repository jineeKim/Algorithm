#include <iostream>
using namespace std;

//C ������ ����� 8 ���� ��Ÿ��������(c d e f g a h C).�̸� 1 ���� ���� 8 �� ����� �Ѵ�.
//1 ���� 8 ������ ���� ������ ������ �� �� ������ ������ �־��� �� 
//�� ������ ��������(ascending)���� ��������(descending)���� �ƴϸ� ����(mix) �ִ��� �� �˾Ƴ��� �����̴�.

int main(int argc, char* argv) {
	int i = 0, j = 0;
	int arr[8] = { 0, };
	int ascending = 0, descending = 0;
	while (cin >> i) {
		arr[j] = i;
		j++;
	}

	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])-1) ; i++) {
		if (arr[i] < arr[i + 1]) {
			ascending++;
		}
		else if (arr[i] > arr[i + 1]) {
			descending++;
		}
	}

	if (ascending == 7) {
		cout << "ascending";
	}
	else if (descending == 7) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}