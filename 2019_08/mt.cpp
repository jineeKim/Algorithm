#include <stdio.h>
int n;
int tmp;

void mt(int n) {
	if (n == tmp) {
		printf("%d", n);
	}
	else {
		printf("%d", n);
		mt(n + 1);
		printf("%d", n);
	}
	
}
int main() {
	scanf("%d", &n);
	tmp = n;
	mt(1);
	return 0;
}