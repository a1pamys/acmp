#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
     
    int n;
    scanf("%d",&n);
    int twos=0,threes;
    if(n%3==1){
        twos = 2;
        threes = n/3-1;
    } else if(n%3==2){
        threes = n/3;
        twos = 1;
    } else {
        threes = n/3;
    }
     
    if(twos == 0){
        printf("3 %d",threes);
    } else if(threes == 0){
        printf("2 %d",twos);
    }else {
        printf("2 %d 3 %d", twos,threes);
    }
     
    return 0;
}