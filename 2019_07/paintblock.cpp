#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", ((a - 2) + (b - 2) + (c - 2)) * 4);

	return 0;
}