#include <stdio.h>
#include <cmath>
using namespace std;

int sum, minSum;
int min=987987987;
    
int main() {
    
    for(int i=0; i<10; i++) {
        int input=0;
        scanf("%d", &input);
        
        sum+=input;
        
        if(abs(100-sum) <= min){
            min=abs(100-sum);
            
            if(minSum<sum)
                minSum = sum;
        }
    }
    
    printf("%d", minSum);

    return 0;
}