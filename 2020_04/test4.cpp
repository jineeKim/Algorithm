#include <cstring>
#include <vector>
#include <string>

using namespace std;
vector<string> email;
int check[10010];

string getLowerCase(string str){
  for(int i=0; i<str.size(); i++){
    if(str[i]<=90 && str[i]>=65) str[i]+=32;
    if(str[i]=='-') {str.erase(i, 1); i--;}
  }
  return str;
}

void makeEmail(string first, string name){
  string tmp = getLowerCase(name) + "_" + getLowerCase(first);
  
  int cnt=0;
  for(int i=0; i<email.size(); i++){
    if(email[i]==tmp) cnt++;
  }
  
  if(cnt>0) check[email.size()]=cnt+1;
  email.push_back(tmp);
}

void getResult(string name, string &C){
  int str_len=0;
  string str_arr[1010];

  char *str_buff = new char[1010];
  strcpy(str_buff, name.c_str());
  
  char *tmp = strtok(str_buff, " ");
  while (tmp != nullptr) {
      str_arr[str_len++] = string(tmp);
      tmp = strtok(nullptr, " ");
  }
  
  makeEmail(str_arr[0], str_arr[str_len-1]);
  
}

string solution(string &S, string &C) {
  memset(check, 0, sizeof(check));
  email.clear();
  
  int str_len=0;
  string str_arr[1010];

  char *str_buff = new char[1010];
  strcpy(str_buff, S.c_str());
  
  char *tmp = strtok(str_buff, ";");
  while (tmp != nullptr) {
      str_arr[str_len++] = string(tmp);
      tmp = strtok(nullptr, ";");
  }
    
  for(int i=0; i<str_len; i++) getResult(str_arr[i], C);
  
  string result;
  string comp = getLowerCase(C);
  
  for(int i=0; i<email.size()-1; i++){
    if(check[i]!=0)
      result+=str_arr[i]+" <"+email[i]+to_string(check[i])+"@"+comp+".com>;";
    else result+=str_arr[i]+" <"+email[i]+"@"+comp+".com>;";
  }
  if(check[email.size()-1]!=0)
    result+=str_arr[email.size()-1]+" <"+email[email.size()-1]+to_string(check[email.size()-1])+"@"+comp+".com>";
  else result+=str_arr[email.size()-1]+" <"+email[email.size()-1]+"@"+comp+".com>";
  
  return result;
}

int main(){
  string S=
  "John Doe; Peter Benjamin Parker; Mary Jane Watson-Parker; John Elvis Doe; John Evan Doe; Jane Doe; Peter Brian Parker";
  string c= "Example";
  
  printf("%s", solution(S, c).c_str());
  
  // for(int i=0; i< email.size(); i++) printf("%s %d\n", email[i].c_str(), check[i]);
  return 0;
}