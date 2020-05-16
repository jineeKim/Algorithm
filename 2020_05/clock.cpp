#include <iostream>
#include <stdio.h>
using namespace std;

int h, m;

int main() {
    scanf("%d %d", &h, &m);
    
    m-=45;
    if(m<0){
        h--;
        if(h<0) h=23;
        m=60+m;
    }
    printf("%d %d", h, m);
    
    return 0;
}
