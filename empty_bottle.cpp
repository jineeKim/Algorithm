#include <stdio.h>

int main() {
	int a = 0;
	int event1 = 0, event2 = 0;

	scanf("%d", &a);
	event1 = a / 4;
	event2 = event1 / 4;

	printf("%d %d", a + event1 + event2, a % 4 + event1 % 4);
	

	return 0;
}