#include <stdio.h>
#include <string.h>

int str_cmp(const char* p, const char* q){
	return *p - *q;
}

int main(){
	char buf1[500] = { 0, };
	char buf2[500] = { 0, };

	int sum = 0;
	int min = 0;

	scanf("%s %s", &buf1, &buf2);

	for (int i = 0; i < strlen(buf1) || i < strlen(buf2); i++) {
		if (str_cmp((const char*)& buf1 + i, (const char*)& buf2 + i)) {
			sum += str_cmp((const char*)& buf1 + i, (const char*)& buf2 + i);
			break;
		}
	}

	printf("%d", sum);

	return 0;
}