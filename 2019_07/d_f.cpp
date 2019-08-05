#include <stdio.h>
#include <math.h>

int main() {

	double n;
	int m;

	scanf("%lf", &n);
	m = floor(n);
	n = n - m;
	printf("%d %.2f\n", m, n);

	return 0;
}