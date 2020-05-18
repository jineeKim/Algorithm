#include <stdio.h>

using namespace std;

int n, k, cnt, index;
int arr[30];
int result[30];
bool check[30];

void getResult(int idx){
    if(idx>=n){
        cnt++;
        if(cnt==k && index==1){
            for(int i=0; i<n; i++){
                printf("%d ", arr[i]);
            }
        }
        
        if(index==2){
            bool flag = false;
            
            for(int i=0; i<n; i++){
                if(arr[i]!=result[i]) flag=true;
            }
            
            if(flag) return;
            else printf("%d", cnt);
        }
        return;
    }
    
    for(int i=1; i<=n; i++){
        if(!check[i]){
            arr[idx]=i;
            check[i]=true;
            getResult(idx+1);
            check[i]=false;
        }
    }
}


int main() {
    scanf("%d %d", &n, &index);
    
    if(index==1){
        scanf("%d", &k);
    }else if(index==2){
        for(int i=0; i<n; i++) scanf("%d", &result[i]);
    }
    
    getResult(0);
   
    return 0;
}