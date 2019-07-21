#include <stdio.h>

int main() {
	int computer = 0, printer = 0, router = 0;
	float sum = 0;

	scanf("%d %d %d", &computer, &printer, &router);
	sum = computer * 2.5 + printer * 2 + router * 0.5;
	sum *= 2;

	int result = (sum / 10);

	if ((int)sum % 10 != 0) {
		printf("%d amperes", (result + 1) * 10);
	}
	else {
		printf("%d amperes", result * 10);
	}

	return 0;
}