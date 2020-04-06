#include <stdio.h>

int n, cnt, result;
int arr[110];
int tmp[110];

int main(){
  scanf("%d", &n);
  for(int i=0; i<n; i++) scanf("%d", &arr[i]);
  
  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      cnt++;
      tmp[i]=cnt;
    } 
    else cnt=0;
  }
  
  for(int i=0; i<n;  i++) result+=tmp[i];
  printf("%d", result);
  
  return 0;
}