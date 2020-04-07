#include <stdio.h>

int num, result;
char str[110];

int main(){
    scanf("%d", &num);
    scanf("%s", str);
    

    for(int i=0; i<num; i++) result+=str[i]-'0';
    printf("%d", result);

    return 0;
}
