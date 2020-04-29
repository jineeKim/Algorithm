#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstring>
using namespace std;

struct info{
    int r; int c; int d; int s; int z; bool tf;   
};

int row, col, n, result;
int map[110][110];
vector<info> shark;

int cdir[5]={0, 2, 1, 4, 3};

int dx[5] = {0, 0, 0, 1, -1};
int dy[5] = {0, -1, 1, 0, 0};

void catchShark(int x){
    for(int i=1; i<=row; i++){
        if(map[i][x]!=0 && !shark[map[i][x]].tf){
            result+=shark[map[i][x]].z;
            shark[map[i][x]].tf=true;
            return;
        }
    }
}

void changDir(int x){
  int dir=cdir[shark[x].d];
  shark[x].d=dir;
  
  shark[x].r+=dy[dir];
  shark[x].c+=dx[dir];
}

void moveShark(){
    for(int i=1; i<=n; i++){
        if(shark[i].tf) continue;
        
        for(int j=0; j<shark[i].s; j++){
            int r=shark[i].r;
            int c=shark[i].c;
            int d=shark[i].d;
            
            int ny = r+dy[d];
            int nx = c+dx[d];
            
            shark[i].r=ny;
            shark[i].c=nx;
            
            if(shark[i].c==0 || shark[i].c>=col-1 || shark[i].r==0 || shark[i].r>=row-1) changDir(i);
        }
        
        if(map[shark[i].r][shark[i].c]!=0){
            int x=map[shark[i].r][shark[i].c];
            if(shark[x].z<shark[i].z){ 
                map[shark[i].r][shark[i].c]=i;
                shark[x].tf=true;
            }
        }else
            map[shark[i].r][shark[i].c]=i;
    }    
}

void printShark(){
    printf("\n");
    for(int i=0; i<=n; i++) printf("%d %d %d %d %d %d\n", shark[i].r, shark[i].c, shark[i].s, shark[i].d, shark[i].z, shark[i].tf);
    printf("\n");
}

int main(){
    scanf("%d %d %d", &row, &col, &n);
    shark.push_back({0, 0, 0, 0, 0});
    
    for(int i=1; i<=n; i++){
        int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        map[a][b]=i;
        shark.push_back({a, b, c, d, e, false});
    }
    
    for(int i=1; i<=col; i++){
        catchShark(i);
        memset(map, 0, sizeof(0));
        moveShark();
        printShark();
        printf("%d\n", result);
    }
    
    printf("%d", result);
    return 0;
}
