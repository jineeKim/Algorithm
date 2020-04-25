#include <string>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

struct  info{
  int y; int x;
};

int map[10][10];
bool checkMap[10][10];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int makeMap(int position, int color){
  for(int i=6; i>0; i--){
    if(map[i][position]==0) {
      map[i][position]=color;
      return i;
    }
  }
}

void checkColor(int y, int x){
  queue <info> q;
  int cnt=0;
  q.push({y, x});
  
  while(!q.empty()){
    int nowY = q.front().y;
    int nowX = q.front().x;
    q.pop();
    
    for(int k=0; k<4; k++){
     int nX = nowX+dx[k];
     int nY = nowY+dy[k];
     
     if(map[nY][nX] == map[nowY][nowX]){
       cnt++;
       q.push({nY, nX});
       checkMap[nY][nX]=true;
     }
   }
   
  }
  
  if(cnt>=3){
    for(int i=1; i<7; i++){
      for(int j=1; j<7; j++){
        if(checkMap[i][j]) map[i][j]=0;
      }
    }
    
    for(int i=1; i<7; i++){
      for(int j=6; j>0; j--){
        if(checkMap[j][i]) {
          map[j][i]=0;
          
          
        }
      }
    }
  }
  
  
}

vector<string> solution(vector<vector<int>> macaron) {
    vector<string> answer;
    
    for(int i=0; i<macaron.size(); i++){
      int idx = makeMap(macaron[i][0], macaron[i][1]);
      checkColor(idx, macaron[i][0]);
      
    }
    
    return answer;
}

int main(){
  vector<vector<int>> macaron = {{1,1},{2,1},{1,2},{3,3},{6,4},{3,1},{3,3},{3,3},{3,4},{2,1}};
  solution(macaron);
  return 0;
}