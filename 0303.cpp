#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    string str;
    getline(cin, str);
    
    int len = int(str.length());
    int a[len];

    for(int i=0; i<len; i++) {
        a[i] = str[i] - '0';
    }
    int max=-9999, temp;
    bool odd;
    
    for(int i=0; i<len; i++) {
        odd = true;
        temp = 0;
        
        for(int j=0; j<len; j++) {
            if(j==i) {
                continue;
            }
            
            if(odd) {
                temp += a[j];
                odd = false;
            } else {
                temp -= a[j];
                odd = true;
            }
        }
        
        if(max < temp) {
            max = temp;
        }
    }
    
    printf("%d", max);
        
    return 0;
}
