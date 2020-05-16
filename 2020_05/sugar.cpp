#include <iostream>
#include <stdio.h>
using namespace std;

int n, m, result=-1;
bool flag=false;

int main() {
    scanf("%d", &n);
    
    if(n%5==0){
        result=n/5;
    }else{
       for(int i=n/5; i>=0; i--){
           for(int j=n/3; j>=0; j--){
               if(n==(5*i)+(3*j)){
                   result = i+j;
                   flag=true;
                   break;
               }
           }
           if(flag) break;
       }
    }
    
    printf("%d", result);
    
    return 0;
}