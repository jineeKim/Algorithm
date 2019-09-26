#include <stdio.h>

char a[101][101];

int main() {
	int i = 0;

	while (scanf("%[^\n]\n", a[i]) != -1) {
		i++;
	}

	for(int j=0; j<i; j++) {
		printf("%s\n", a[j]);
	}
	return 0;
}