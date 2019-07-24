#include <stdio.h>

int main() {
	long n = 0, m = 0;
	double result = 1;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		result *= m;
	}

	printf("%.lf", result);
}