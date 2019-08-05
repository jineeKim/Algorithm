#include <stdio.h>
#include <math.h>

int main() {
	float r = 0;
	int n = 0;

	scanf("%f %d", &r, &n);
	printf("%.3f", 0.5 * r * r * n * (sin((2.0 / n) * 3.14159265359)));
	return 0;
}