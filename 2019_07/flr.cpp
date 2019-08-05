#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;

	scanf("%d", &n);

	printf("%d", (int)log2(n)+1);

	return 0;
}