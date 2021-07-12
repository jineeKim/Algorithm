//2693 N번째 큰 수 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10);
    int n=0;
    cin >> n;
    
    for(int k=0; k<n; k++){
        for(int i=0; i<v.size(); i++){
            cin >>v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v[2] <<'\n';
    }
    
    return 0;
}