#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char arr[1000] = { 0, };
	int stack[100] = { 0, };
	int j = 0;

	scanf("%s", &arr);

	for (int i = strlen(arr) - 1; i >= 0; i--) {
		if (arr[i] > 47 && arr[i] < 58) {
			stack[j] = (arr[i]-48);
			j++;
		}
		else if (arr[i] == '*') {
			stack[j - 2] = stack[j - 2] * stack[j - 1];
			j--;
		}
		else if (arr[i] == '/') {
			if (stack[j - 2])
				stack[j - 2] = stack[j - 1] / stack[j - 2];
			else {
				printf("Divide by zero\n");
				return 0;
			}
			j--;
		}
		else if (arr[i] == '+') {
			stack[j - 2] = stack[j - 2] + stack[j - 1];
			j--;
		}
		else if(arr[i] == '-') {
			stack[j - 2] = stack[j - 1] - stack[j - 2];
			j--;
		}
	}

	printf("%d", stack[0]);

	return 0;
}