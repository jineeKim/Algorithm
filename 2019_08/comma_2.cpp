#include <stdio.h>
#include <string.h>

int main() {
	char n[101] = { 0, };
	
	scanf("%s", &n);

	int str_len = strlen(n);
	int j = 0;

	for (int i = 0; i < strlen(n); i++) {
		printf("%c", n[i]);
		if (i == str_len - 1)
			break;
		if (str_len % 3 == 1 && i % 3 == 0) {
			printf(",");
		}
		else if (str_len % 3 == 2 && i % 3 == 1) {
			printf(",");
		}
		else if (str_len % 3 == 0 && i % 3 == 2){
			printf(",");
		}
	}
	

	return 0;
}