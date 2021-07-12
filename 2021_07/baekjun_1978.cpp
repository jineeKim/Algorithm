//1978 소수찾기

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n=0, m=0, res=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        if(m != 1 && m != 0) v.push_back(m);
    }
    
    for(int i=0; i<v.size(); i++){
        int flag=0;
        for(int j=2; j<v[i]; j++){
            if(v[i]%j==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) res++;
    }
    
    cout << res;
    
    return 0;
}