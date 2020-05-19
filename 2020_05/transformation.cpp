#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int n, k;
vector <int> v;
int alpha[30];

int main() {
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<30; i++) alpha[i]='A'+i;
    
    while(n/k!=0){
        v.push_back(n%k);
        n/=k;
    }
    v.push_back(n%k);
    
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]>=10) printf("%c", alpha[v[i]-10]);
        else printf("%d", v[i]);
    }
    
    return 0;
}
