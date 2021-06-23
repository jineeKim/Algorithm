//3460 이진수

#include <stdio.h>

using namespace std;

int main(){
    int n=0, t=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        int num=0;
        
        while(t!=0){
            
            if(t%2==1)
                printf("%d ", num);
            t=t/2;
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
