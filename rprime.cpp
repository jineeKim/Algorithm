#include <stdio.h>
int gcd(int a, int b) {
	if (a * b == 0)
		return 0;
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	return a;
}
int main() {
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);

	if (gcd(a, b) == 1)
		printf("yes");
	else
		printf("no");



	return 0;
}