#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct info{
  int cnt; string ip;
};

vector<info> same_ip;

void findIP(string ip){
  bool  flag = false;
  
  for(int i=0; !same_ip.empty() && i<same_ip.size(); i++){
    if(same_ip[i].ip==ip) {
      same_ip[i].cnt++;
      flag=true;
      break;
    }
  }
  
  if(!flag) same_ip.push_back({1, ip});
  
}

int lanType(string  lan){
  if(lan=="C++" || lan=="C" ||  lan=="C#") return 1;
  else if(lan=="Java") return 2;
  else if(lan=="JavaScript") return 3;
  else if(lan=="Python3") return 4;
}

bool checkLan(int idx, vector<int> ip_idx,  vector<string> langs){
  int result=1;
  int langs_type = lanType(langs[ip_idx[0]]);
  
  for(int i=1; i<ip_idx.size(); i++){
    if(langs_type==lanType(langs[ip_idx[i]])) result++;
  }
  
  if(result>=ip_idx.size()) return true;
  else return false;
}

int solution(vector<string> ip_addrs, vector<string> langs, vector<int> scores) {
  
  int answer = ip_addrs.size();
  
  for(int i=0;  i<ip_addrs.size(); i++){
     findIP(ip_addrs[i]);
  }
  
  vector<int> ip_idx[same_ip.size()];
  
  for(int i=0; i<ip_addrs.size();  i++){
    for(int j=0; j<same_ip.size(); j++){
      if(same_ip[j].ip==ip_addrs[i]) {
        ip_idx[j].push_back(i);
      }
    }
  }
  
  for(int i=0;  i<same_ip.size(); i++){
    if(same_ip[i].cnt>=4) answer -= same_ip[i].cnt;
    else if(same_ip[i].cnt==3){
      if(checkLan(i, ip_idx[i], langs)) answer -=3;
    }else if(same_ip[i].cnt==2){
      if(checkLan(i, ip_idx[i],  langs)){
        if(scores[ip_idx[i][0]]==scores[ip_idx[i][1]]){
          answer -=2;
        }
      }
    }
  }
  
  return answer;
}

int main() {
  vector<string> ip_addrs = {"5.5.5.5", "155.123.124.111", "10.16.125.0", "155.123.124.111", "5.5.5.5", "155.123.124.111", "10.16.125.0", "10.16.125.0"};
  vector<string> langs = {"Java", "C++", "Python3", "C#", "Java", "C", "Python3", "JavaScript"};
  vector<int> scores={294, 197, 373, 45, 294, 62, 373, 373};
  printf("%d\n", solution(ip_addrs, langs, scores));
  
  return 0;
}