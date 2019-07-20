#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv) {
	char arr[80][80];
	int length[80] = { 0, };
	char i, temp;
	int j = 0, k = 0, l=  0;

	while (scanf("%c", &i)) {
		if (i == ' ' ) {
			arr[j][k] = '\0';
			j++;
			length[l] = k;
			l++;
			k = 0;
		}
		else if (i == '\0' || i == '\n') {
			length[l] = k;
			l++;
			break;
		}
		else {
			arr[j][k] = i;
			k++;
		}
	}

	
	for (int i = 0; i <= j; i++) {
		for (int j = length[i]; j > 0; j--) {
			cout << arr[i][j-1];
		}
		cout << " ";
	}

	
}
