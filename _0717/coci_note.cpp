#include <iostream>
using namespace std;

//C 장조의 음계는 8 개로 나타내어진다(c d e f g a h C).이를 1 에서 숫자 8 로 약속을 한다.
//1 에서 8 까지의 수가 임의의 순서로 한 번 나오는 수열이 주어질 때 
//이 수열이 오름차순(ascending)인지 내림차순(descending)인지 아니면 섞여(mix) 있는지 를 알아내는 문제이다.

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