#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
     
    int n;
    scanf("%d",&n);
     
    bool p = true;
     
    vector<int> a;
    a.push_back(2);
     
    for(int i=3; i<=998; i+=2){
        p = true;
        for(int j=0; a[j]<=sqrt(i); j++){
            if(i%a[j]==0){
                p = false;
                break;
            }
        }
        if(p){
            a.push_back(i);
        }
    }
    int t;
    for(int i=0; i<a.size();i++){
        t = n-a[i];
        for(int j=0; j<a.size(); j++){
            if(t - a[j] == 0){
                printf("%d %d",a[i],a[j]);
                return 0;
            }
        }
    }
}