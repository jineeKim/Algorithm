//2051 약수구하기


#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    int n=0, k=0, num=0;
    
    scanf("%d %d", &n, &k);
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            num++;
            if(num==k){
                printf("%d", i);
                return 0;
            }
        }
    }
    
    printf("0");
    
    return 0;
}