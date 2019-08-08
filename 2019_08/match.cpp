#include <stdio.h>
#include <string.h>

int main() {
	char arr[50] = { 0, };
	char out[50] = { 0, };
	int i = 0, j = 0;
	char c;

	scanf("%s", &arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '(') {
			out[++j] = i;
		}
		else if (arr[i] == ')') {
			printf("%d %d\n", out[j], i);
			if (j > 1)
				j--;
		}
		else if (j < 1 ) {
			printf("not match\n");
		}
	}

	return 0;
}