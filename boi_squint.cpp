#include <stdio.h>
#include <math.h>

int main() {
	double input;

	scanf("%lf", &input);

	printf("%.0lf", ceil(sqrt(input)));

	return 0;
}