#include <stdio.h>

using namespace std;

int arr[10010];
int n, m;
int start, end, result, sum;

int main() {
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    while(1){
        if(sum>=m) sum-=arr[start++];
        else if(end==n) break;
        else sum+=arr[end++];
        
        if(sum==m) result++;
    }
    
    printf("%d", result);
    
    return 0;
}
