#include <stdio.h>
#include <cstring>
using namespace std;

char str[110];
int cnt, len;

int main() {
  scanf("%s", str);
  len=strlen(str);
  
  for(int i=0; i<len; i++){
    bool flag=false;
    
    if(str[i]=='c'){
      if(i+1<len && (str[i+1]=='=' || str[i+1]=='-')) flag=true;
    }else if(str[i]=='d'){
      if(i+1<len && str[i+1]=='-') flag=true;
      if(i+2<len && str[i+1]=='z' && str[i+2]=='=') {flag=true; i++; }
    }else if(str[i]=='l'){
      if(i+1<len && str[i+1]=='j') flag=true;
    }else if(str[i]=='n'){
      if(i+1<len && str[i+1]=='j') flag=true;
    }else if(str[i]=='s'){
      if(i+1<len && str[i+1]=='=') flag=true;
    }else if(str[i]=='z'){
      if(i+1<len && str[i+1]=='=') flag=true;
    }
    
    if(flag) i++;
    cnt++;
  }
  
  printf("%d", cnt);
  
  return 0;
}