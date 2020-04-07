#include <stdio.h>
#include <cstring>
using namespace std;

char str[20];
int alpha[30];
int len, result, num=2;

int main() {
  scanf("%s", str);
  len=strlen(str);
  
  int j=0;
  for(int i=0; i<26; i++, j++){
    if((i>=0 && i<16) || (i>=20 && i<23)){
      if(j==3){
        j=0; num++;
      }
    }
    else if((i>=16 && i<20) || (i>=23 && i<26)) {
      if(j==4){
        j=0; num++;
      }
    }
    alpha[i]=num;
  }
  
  for(int i=0; i<len; i++) result+=(alpha[str[i]-'A']+1);
  
  printf("%d", result);
  
  return 0;
}