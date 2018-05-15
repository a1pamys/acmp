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
    int len = int(str.length()), ctr=0, cps=0;
    bool sml = false;
    if(len < 2 || (str[len-1] >= 'A' && str[len-1] <= 'Z')) {
        printf("No");
        return 0;
    }
    for(int i=0; i<len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            cps++;
        }
        
        while(str[i] >= 'a' && str[i] <= 'z') {
            sml = true;
            ctr++;
            i++;
            if(!(ctr >= 1 && ctr <=3) || cps < 1) {
                printf("No");
                return 0;
            }
            cps = 1;
        }
        if(cps > 1) {
            printf("No");
            return 0;
        }
        ctr = 0;
        sml = false;
    }
    printf("Yes");
    return 0;
}
