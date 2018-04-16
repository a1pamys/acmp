#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
     
    int n,m;
    bool p = true,ab = true;
    vector<int> a;
    a.push_back(2);
    scanf("%d %d", &n,&m);
     
    if(n == 2){
        printf("2\n");
        ab = false;
    }
     
    for(int i=3; i<=m; i+=2){
        p = true;
        for(int j=0; a[j]*a[j]<=i; j++){
            if(i%a[j]==0){
                p = false;
                break;
            }
        }
        if(p){
            a.push_back(i);
            if(i>=n && i<=m){
                printf("%d\n", i);
                ab = false;
            }
        }
    }
     
    if(ab){
        printf("Absent");
    }
 
    return 0;
}