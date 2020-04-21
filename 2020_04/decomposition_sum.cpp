#include <stdio.h>
#include <math.h>
using namespace std;

int n, result;
int num=1;

int main(){
    scanf("%d", &n);
    
    for(int i=1; i<n; i++){
        int sum=0;
        for(int j=5; j>=0; j--){
            sum+=( i / (int)pow(10, j) % 10);
        }
        sum+=i;
        
        if(sum==n) {
            result = i;
            break;
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}
