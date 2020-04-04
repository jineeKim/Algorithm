#include <stdio.h>

int n, m;

bool isPrime(int x){
  if(x==1) return false;
  for(int i=2; i<x; i++){
    if(x%i==0) return false;
  }  
  return true;
}

int main(){
  scanf("%d %d", &n, &m);
  
  for(int i=n; i<=m; i++){
    if(isPrime(i)) printf("%d ", i);
  }
  
  return 0;
}