#include <stdio.h>

char a[5], b[5];
bool flag;

int main() {
  scanf("%s %s", a, b);
  
  for(int i=2; i>=0; i--){
    if(a[i]>b[i]) {
      flag=true;
      break;
    }else if(a[i]<b[i]){
      flag=false;
      break;
    }
  }
  
  for(int i=2; i>=0; i--){
    if(flag) printf("%c", a[i]);
    else printf("%c", b[i]);
  }
  
  return 0;
}