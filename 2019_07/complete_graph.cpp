#include <stdio.h>

int main() {
	int n = 0;

	scanf("%d", &n);

	printf("%d", (int)(n * (n - 1)) / 2);

	return 0;
}