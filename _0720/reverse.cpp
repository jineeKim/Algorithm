#include <iostream>
using namespace std;

//������ ������ ���ڿ��� �Է����� �޾� ������ ���� �� �� ���ڿ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main(int argc, char* argv) {
	char arr[1000];
	char j, temp;
	int i = 0;

	while (cin >> j) {
		arr[i] = j;
		i++;
	}

	int size = i--;

	for (int k = 0; k < size / 2; k++) {
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
		i--;
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}