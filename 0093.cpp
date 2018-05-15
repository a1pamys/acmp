#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool compareTwoString(string orgnl, string copy, int len) {
    int ctr = 0;
    for(int i=0; i<len; i++) {
        if(orgnl[i] != copy[i]) {
            ctr++;
        }
    }
    if(ctr != 1) {
        return false;
    }
    return true;
}

int main() {
    
    int n,k;
    scanf("%d\n", &n);
    string names[n];
    int ans[n];
    for(int i=0; i<n; i++) {
        ans[i] = 0;
    }
    
    for(int i=0; i<n; i++) {
        getline(cin, names[i]);
    }
    
    scanf("%d\n", &k);
    string wrongNames[k];
    
    for(int i=0; i<k; i++) {
        getline(cin, wrongNames[i]);
        for(int j=0; j<n; j++) {
            int l1 = int(names[j].length());
            int l2 = int(wrongNames[i].length());
            if(l1 == l2) {
                if(compareTwoString(names[j], wrongNames[i], l1)) {
                    ans[j]++;
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
