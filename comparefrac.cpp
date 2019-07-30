#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a * d - b * c > 0)
		printf("1");
	else if (a * d - b * c == 0)
		printf("0");
	else if (a * d - b * c < 0)
		printf("-1");

	return 0;
}