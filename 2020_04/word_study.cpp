#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

char str[1000010];
int alpha[30];
int num, len;

int main() {
  scanf("%s", str);
  len = strlen(str);
  for(int i=0; i<len; i++){
    if(str[i]>'Z') alpha[str[i]-'a']++;
    else alpha[str[i]-'A']++;
  }
  
  int max=0, idx=0; 
  for(int i=0; i<26; i++){
    if(max<alpha[i]) {
      max=alpha[i];
      idx=i;
    }
  }
  
  int cnt=0; 
  for(int i=0; i<26; i++){
    if(max==alpha[i]) cnt++;
  }
  
  if(cnt>1) printf("?");
  else printf("%c", idx+'A');
  
  return 0;
}