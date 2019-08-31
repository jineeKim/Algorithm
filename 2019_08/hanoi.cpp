#include <stdio.h>

void recursive(int n, int x, int y, int z) {
	if (n > 0) {
		recursive(n - 1, x, z, y);
		printf("%d -> %d\n", x, z);
		recursive(n - 1, y, x, z);
	}

}

int main() {
	int input = 0;
	scanf("%d", &input);
	recursive(input, 1, 2, 3);
	return 0;
}