#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d", (n * (n - 1) * (n - 2) * (n - 3)) / 24);
	return 0;
}