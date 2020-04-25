#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

bool checkList(vector<string> registered_list, string new_id){
  bool flag=false;
  for(int i=0; i<registered_list.size(); i++){
    if(registered_list[i]==new_id) {
      flag=true;
      break;
    }
  }
  
  if(flag) return false;
  else return true;
}
string solution(vector<string> registered_list, string new_id) {
  string answer="";
  
  if(checkList(registered_list, new_id)) return new_id;
  
  while(!checkList(registered_list, new_id)){
    string id, str, tmp;
    int num;
    
    for(int i=0; i<new_id.size(); i++){
      if(new_id[i]<65) str+=new_id[i];
      else id+=new_id[i];
    }
    
    num=atoi(str.c_str());
    tmp = to_string(++num);
    new_id=id+tmp;
  }
    
  return new_id;
}