#include <stdio.h>

int a[10];
int b[10];
int resultA, resultB;

int main(){
  for(int i=0; i<10; i++) scanf("%d", &a[i]);
  for(int i=0; i<10; i++) scanf("%d", &b[i]);
  
  for(int i=0; i<10; i++){
    if(a[i]>b[i]) resultA++;
    else if(a[i]<b[i]) resultB++;
  }
  
  if(resultA>resultB) printf("A");
  else if(resultA<resultB) printf("B");
  else printf("D");
  
  return 0;
}