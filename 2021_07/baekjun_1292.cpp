//1292 쉽게 푸는 문제

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=0, m=0, num=1, cnt=0;
    int sum=0;
    vector<int> a(1001);
    
    cin >> n >> m;
    
    for(int i=1; i<=m;){
        if(cnt<num){
            a[i]=num;
            cnt++;
            i++;
        }else{
            cnt=0;
            num++;
        }
    }
    
    for(int i=n; i<=m; i++){
        sum+=a[i];
    }
    
    cout << sum;
    return 0;
}
