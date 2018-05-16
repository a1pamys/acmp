#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int n, res[2], maxNum;
    scanf("%d\n", &n);
    bool odd = true;
    vector<int> a(n);
    res[0] = 0;
    res[1] = 0;
    
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    while(n>0) {
        maxNum = max(*a.begin(), *(a.end()-1));
        
        if(*a.begin() >= *(a.end()-1)) {
            a.erase(a.begin());
        } else {
            a.erase(a.end()-1);
        }
        
        if(odd) {
            res[0] += maxNum;
            odd = false;
        } else {
            res[1] += maxNum;
            odd = true;
        }
        n--;
    }
    
    printf("%d:%d", res[0], res[1]);
    
    return 0;
}
