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
    int fibNum[24];
    
    fibNum[0] = 1;
    fibNum[1] = 1;
    
    for(int i=1; fibNum[i] <= len; i++) {
        fibNum[i+1] = fibNum[i] + fibNum[i-1];
        printf("%c", str[fibNum[i]-1]);
    }
    
    return 0;
}
