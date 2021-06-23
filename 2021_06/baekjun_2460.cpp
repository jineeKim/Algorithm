//2460 지능형 기차2

#include <stdio.h>

using namespace std;

int main(){
    int num=0, max=0;
    int in=0, out=0;
    
    for(int i=0; i<10; i++){
        scanf("%d %d", &out, &in);
        
        num = num-out+in;
        if(num>max) max = num;
    }
    printf("%d", max);
    
    return 0;
}