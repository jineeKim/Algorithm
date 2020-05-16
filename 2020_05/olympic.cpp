#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, k, r=1;
struct info{
    int idx; int g; int s; int b;
};
vector<info> v;

bool compare(info a, info b) {
	if (a.g == b.g) {
		if (a.s == b.s) {
			return a.b > b.b;
		}
		return a.s > b.s;
	}
	return a.g > b.g;
}

int main() {
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<n; i++){
        int g=0, s=0, b=0, idx=0;
        scanf("%d %d %d %d", &idx, &g, &s, &b);
        v.push_back({idx, g, s, b});
    }
    
    sort(v.begin(), v.end(), compare);
    
    // for(int i=0; i<n; i++) printf("%d\n", v[i].idx);
    
    for(int i=0; i<n; i++){
        int cnt=0;
        if(v[i].idx==k){
            for(int j=1; j<i; j++){
                if(i==j) continue;
                if(v[i].g==v[j].g && v[i].s == v[j].s && v[i].b == v[j].b) cnt++;
            }
            printf("%d", i+1-cnt);
            break;
        }
    }    

    return 0;
}