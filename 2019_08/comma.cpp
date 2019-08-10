#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char input[100] = { 0, };
	char stack[133] = { 0, };
	int j = 1;

	scanf("%s", &input);

	for (int i = strlen(input) - 1; i >= 0; i--) {
		if (j % 4 || j == 0) {
			stack[j++] = input[i];
		}
		else {
			stack[j++] = ',';
			stack[j++] = input[i];
		}
	}

	for (j-=1; j > 0; j--) {
		printf("%c", stack[j]);
	}

	return 0;
}