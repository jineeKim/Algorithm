#include <stdio.h>

int n, i;
int arr[20];

int main(){
  scanf("%d", &n);
  
  for(i=0; n!=0; i++){
    arr[i]=n%2;
    n/=2;
  }
  
  for(int j=i-1; j>=0; j--) printf("%d", arr[j]);
  
  return 0;
}