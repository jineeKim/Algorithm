#include <stdio.h>
int n, line;
int main() {
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=n-1-i; j>0; j--) printf(" ");
    for(int j=0; j<=line ; j++) printf("*");
    printf("\n");
    line+=2;
  }
  return 0;
}