#include <stdio.h>

int main() {
	int sec = 0;
	int day = 0, hour = 0, min = 0;
	scanf("%d", &sec);

	day = sec / (3600 * 24);
	hour = (sec - (day * 3600 * 24)) / 3600;
	min = (sec - (day * 3600 * 24) - (hour * 3600)) / 60;
	sec = (sec - (day * 3600 * 24) - (hour * 3600) - (min * 60));
	
	printf("%d ", day);
	printf("%d ", hour);
	printf("%d ", min);
	printf("%d ", sec);
}