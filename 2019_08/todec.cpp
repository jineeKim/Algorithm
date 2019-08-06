#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char arr[30] = { 0, };
	int n = 0, j = 1;

	scanf("%s", &arr);

	for (int i = strlen(arr) - 1; i >= 0; i--) {
		n += (arr[i]-48)* j;
		j *= 2;
	}
	
	printf("%d", n);
	return 0;
}