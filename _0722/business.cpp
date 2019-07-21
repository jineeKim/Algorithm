#include <stdio.h>

int main() {
	int n = 0, m = 0, p = 0, c = 0;
	scanf("%d %d %d %d", &n, &m, &p, &c);
	printf("%d", n - ((m + c) - p) + c);
	return 0;
}