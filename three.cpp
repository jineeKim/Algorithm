#include <stdio.h>

int main() {
	int a = 0, b = 0;
	int n1 = 0, n2 = 0, n3 = 0;

	scanf("%d %d", &a, &b);

	n1 = a * (b % 10);
	n2 = a * ((b % 100) / 10);
	n3 = a * (b / 100);

	printf("%d\n%d\n%d\n%d", n1, n2, n3, a * b);

}