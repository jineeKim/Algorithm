#include <stdio.h>
	int a, b;

int recursive(int param_a, int param_b) {
	return param_b ? recursive(param_b, param_a % param_b) : param_a;
}

int main() {
	int gcd = 0;

	scanf("%d %d", &a, &b);
	if (a > b)
		gcd = recursive(a, b);
	else
		gcd = recursive(b, a);
	
	if (a == b)
		printf("%d %d", a, b);
	else
		printf("%ld %ld", gcd, a*b / gcd);

	return 0;
}