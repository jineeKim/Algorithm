#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[110];
int alpha[30];
int num, len, cnt;

int main(){
  scanf("%d", &num);
  
  while(num-- > 0){
    memset(str, 0, sizeof(str));
    memset(alpha, 0, sizeof(alpha));
    
    scanf("%s", str);
    len = strlen(str);
    bool flag=false;
    
    for(int i=0; i<len; i++){
      int idx = str[i]-'a';
      if(alpha[idx]==0) alpha[idx]=i+1;
      else{
        if(alpha[idx]!=i)  {
          flag=true;
          break;
        }
        else alpha[idx]=i+1;
      }
    }
    if(!flag) cnt++;
  }
  
  printf("%d", cnt);
  
  return 0;
}