#include <iostream>
using namespace std;

//공백을 포함한 문자열을 입력으로 받아 공백을 없앤 후 이 문자열을 뒤집어 출력하는 프로그램을 작성하시오.

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