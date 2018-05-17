#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    scanf("%d", &n);
    bool truthTable[n];
    
    for(int z=0; z<n; z++) {
        truthTable[z] = true;
        
        int r,c;
        scanf("%d %d", &r, &c);
        
        int a[r][c];
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }
        
        for(int i=0; i<r-1; i++) {
            for(int j=0; j<c-1; j++) {
                if(a[i][j+1] == a[i][j] && a[i+1][j] == a[i][j] && a[i+1][j+1] == a[i][j]) {
                    truthTable[z] = false;
                    break;
                }
            }
        }
    }
    
    for(int z=0; z<n; z++) {
        if(truthTable[z]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
