#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int n, res=0;
    scanf("%d\n", &n);
    
    for(int i=0; i<n; i++) {
        string str;
        getline(cin, str);
        if(str[0] == str[3]) {
            res++;
        }
    }
   
    printf("%d\n", res);
    
    return 0;
}

