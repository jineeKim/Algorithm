#include <stdio.h>
#include <string.h>

char dec[31];

int main() {
	int result = 0;
	int j = 1;
	scanf("%s", &dec);

	for (int i = strlen(dec) - 1; i >= 0; i--) {
		result += (dec[i] - 48) * j;
		j *= 2;
	}

	printf("%d", result);
	return 0;
}