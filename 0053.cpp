//
//  main.cpp
//  C++
//
//  Created by a1pamys on 3/7/18.
//  Copyright © 2018 Алпамыс. All rights reserved.
//
 
#include <iostream>
#include <stdio.h>
#include <vector>
 
using namespace std;
 
int main() {
    
    int n,m,r=0,b=0,g=0,k=0;
    scanf("%d %d", &n, &m);
 
    vector<vector<int>> mat;
    for (int i=0; i<n; i++) {
        vector<int> temp;
        for (int j=0; j<m; j++) {
            temp.push_back((i+1)*(j+1));
        }
        mat.push_back(temp);
    }
 
    for (int i=n-1; i>=0; i--) {
        for (int j=m-1; j>=0; j--) {
            if(mat[i][j] % 5 == 0) {
                b++;
            } else if (mat[i][j] % 3 == 0) {
                g++;
            } else if (mat[i][j] % 2 == 0) {
                r++;
            } else {
                k++;
            }
        }
    }
    printf("RED : %d\nGREEN : %d\nBLUE : %d\nBLACK : %d", r,g,b,k);
 
    return 0;
}