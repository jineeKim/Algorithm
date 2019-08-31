#include <stdio.h>

int n;

void recursive(int n) {
	if (n > 0) {
		recursive(n - 1);
		printf("%d", n);
		recursive(n - 1);
	}
}

int main() {
	
	scanf("%d", &n);
	recursive(n);

	return 0;
}