#include <stdio.h>
#include <string.h>

//(b-c)+((((((a+b)+c)+d)+e)+f)+g)+(e*g)+h+)

int main() {
	char arr[50] = { 0, };
	char out[50] = { 0, };
	int i = 0, j = 0;
	char c;

	scanf("%s", &arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '(') {
			out[j++] = i;
		}else if ((j == 0 && arr[i] == '(')) {
			printf("not match\n");
		}
		else if (j == 0 && arr[i] == ')') {
			printf("not match\n");
		}
		else if (arr[i] == ')') {
			printf("%d %d\n", out[--j], i);
		}
		
	}

	return 0;
}