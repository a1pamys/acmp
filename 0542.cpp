#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
     
    int n;
    scanf("%d",&n);
    vector<int> a;
    while(n>0){
        a.push_back(n%2);
        n /= 2;
    }
     
    for(int i=0; i<a.size(); i++){
        n += a[i]*pow(2,a.size()-1-i);
    }
     
    printf("%d",n);
     
    return 0;
}