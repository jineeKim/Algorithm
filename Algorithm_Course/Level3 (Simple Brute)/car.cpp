#include <stdio.h>
int n, cnt;
int arr[10];
int main() {
  scanf("%d", &n);
  for(int i=0; i<5; i++) scanf("%d", &arr[i]);
  for(int i=0; i<5; i++){
    if(arr[i]==n) cnt++;
  }
  printf("%d", cnt);
  
  return 0;
}