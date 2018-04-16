#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main() {
     
    int n, min = 3000, x;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
     
    for (int i1 = 0; i1 < n; i1++){
        for (int i2 = 0; i2 < n; i2++){
            for (int i3 = 0; i3 < n; i3++){
                if(i1 == i2 || i2 == i3 || i3 == i1){
                    continue;
                }
                x = a[i1][i2] + a[i2][i3] + a[i3][i1];
                if (min > x){
                    min = x;
                }
            }
        }
    }
     
    printf("%d",min);
     
    return 0;
}