#include <stdio.h>

int main() {
	int hour = 0, min = 0, sec = 0;
	int cooking = 0;

	scanf("%d %d %d %d", &hour, &min, &sec, &cooking);

	sec += cooking;

	while (sec / 60) {
		min += sec / 60;
		sec %= 60;
	}

	while (min / 60) {
		hour += min / 60;
		min %= 60;
	}

	hour %= 24;

	printf("%d %d %d\n", hour, min, sec);

}