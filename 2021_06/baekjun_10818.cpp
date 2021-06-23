//10818 최대, 최소

#include <stdio.h>

using namespace std;

int main(){
    int min=0, max=0;
    int n=0, input=0;
    
    scanf("%d", &n);
    
    scanf("%d", &input);
    min=max=input;
    
    for(int i=0; i<n-1; i++){
        scanf("%d", &input);
        
        if(input<min) min = input;
        if(input>max) max = input;
    }
    
    printf("%d %d", min, max);
    return 0;
}