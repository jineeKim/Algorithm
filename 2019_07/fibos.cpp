#include <stdio.h>
#include <string.h>

int main() {
	int input = 0;
	char str1[21][1001] = { 0, };

	scanf("%d", &input);
	scanf("%s", &str1[0][0]);
	scanf("%s", &str1[1][0]);

	printf("%s\n%s\n", str1[0], str1[1]);

	for (int i = 0; i < input-2; i++) {
		printf("%s%s\n", str1[i], str1[i + 1]);
		strcpy(str1[i+2], strcat(str1[i], str1[i+1]));
	}
	return 0;
}