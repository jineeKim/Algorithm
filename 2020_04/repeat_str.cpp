#include <stdio.h>
#include <string.h>
#include <cstring>
using namespace std;

char str[110];
int num, len;

int main() {
  scanf("%d", &num);
  
  for(int k=0; k<num; k++){
    int n=0; 
    memset(str, 0, sizeof(str));
    scanf("%d %s", &n, str);
    len = strlen(str);
    for(int i=0; i<len; i++){
      for(int j=0; j<n; j++) printf("%c", str[i]);
    }
    printf("\n");
  }
  
  return 0;
}