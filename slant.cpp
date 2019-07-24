#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	int result = 0;
	
	scanf("%d %d %d %d", &a, &c, &b, &d);
	result = (d - c) / (b - a);

	printf("%d ", result);
	printf("%d", c - a * result);
	return 0;
}