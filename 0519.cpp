#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
     
    int x;
    scanf("%d",&x);
    int n=0,a=x;
    while(a>0){
        a/=10;
        n++;
    }
     
    vector<int> w;
     
    for(int i=0; i<n; i++){
        w.push_back((x/int(pow(10,i)))%10);
    }
 
    sort(w.begin(), w.end());
     
    if(w[0] == 0){
        for(int i=1; i<n; i++){
            if(w[i] != 0){
                w[0] = w[i];
                w[i] = 0;
                break;
            }
        }
    }
     
    for(int i=0; i<n; i++){
        printf("%d", w[i]);
    }
    sort(w.begin(), w.end());
 
    printf(" ");
    for(int i=n-1; i>=0; i--){
        printf("%d", w[i]);
    }
 
    return 0;
}