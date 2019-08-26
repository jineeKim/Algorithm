#include <stdio.h>
int n;
int a, b;
int a_prize[22];
int b_prize[32];

int main() {
	scanf("%d", &n);

	for (int i = 1; i < 22; i++) {
		if (i == 1)
			a_prize[i] = 500;
		else if (i == 2 || i == 3)
			a_prize[i] = 300;
		else if (i > 3 && i < 7)
			a_prize[i] = 200;
		else if (i > 6 && i < 11)
			a_prize[i] = 50;
		else if (i > 10 && i < 16)
			a_prize[i] = 30;
		else if (i > 15 && i < 22)
			a_prize[i] = 10;
	}

	for (int i = 1; i < 32; i++) {
		if (i == 1)
			b_prize[i] = 512;
		else if (i == 2 || i == 3)
			b_prize[i] = 256;
		else if (i > 3 && i < 8)
			b_prize[i] = 128;
		else if (i > 7 && i < 16)
			b_prize[i] = 64;
		else if (i > 15 && i < 32)
			b_prize[i] = 32;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a > 21)
			a = 0;
		if (b > 31)
			b = 0;
		printf("%d\n", (a_prize[a] + b_prize[b]) * 10000);
	}

	return 0;
}