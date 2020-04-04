#include <stdio.h>

int max, maxIdx;

int main(){
  for(int i=0; i<9; i++){
    int tmp=0;
    scanf("%d", &tmp);
    
    if(tmp>max){
      max=tmp;
      maxIdx=i;
    }
  }
  
  printf("%d\n%d", max, maxIdx+1);
  
  return 0;
}