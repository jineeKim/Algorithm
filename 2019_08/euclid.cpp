#include <stdio.h>
int euclid(int a, int b) {
	int t = 0;
	for (;;) {
		t = a;
		a = b;
		b = t % b;
		if (b == 0) {
			return a;
		}
	}
}
int main() {
	int a = 0, b = 0;
	
	scanf("%d %d", &a, &b);

	if (a < b) {
		a ^= b;
		b ^= a;
		a ^= b;
	}

	printf("%d %d", euclid(a, b), a / euclid(a, b) * b);
	
	

	return 0;
}