#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
 
    string s;
    getline(cin, s);
    int len = int(s.length()), m = 2;
    for(int i=0; i<len; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            m = max(m,s[i]-47);
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            m = max(m,s[i]-54);
        } else {
            printf("-1");
            return 0;
        }
    }
    if(m == 0) {
        printf("2");
    } else {
        printf("%d", m);
    }
    return 0;
}