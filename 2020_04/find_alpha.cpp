#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

char str[110];
int alpha[30];
int len;

int main() {
  memset(alpha, -1, sizeof(alpha));

  scanf("%s", str);
  len = strlen(str);

  for(int i=0; i<len; i++){
    int idx = str[i]-'a';
    if(alpha[idx]==-1) alpha[idx]=i;
  }
  
  for(int i=0; i<26; i++) printf("%d ", alpha[i]);
  
  return 0;
}