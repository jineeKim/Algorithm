#include <stdio.h>
#include <iostream>

using namespace std;

int arr[110];
int result[5];
bool check[110];
int n, m, maxNum;

void getResult(int x){
    if(x>=3){
        int tmp=0;
        for(int i=0; i<3; i++)
            tmp+=result[i];
        if(tmp>maxNum && tmp<=m) maxNum=tmp;
        return;
    }
    
    for(int i=0; i<n; i++){
        if(!check[i]){
            result[x]=arr[i];
            check[i]=true;
            
            getResult(x+1);
            
            result[x]=0;
            check[i]=false;
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    getResult(0);
    
    printf("%d", maxNum);
    
    return 0;
}
