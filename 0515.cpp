#include <stdio.h>
#include <math.h>
 
using namespace std;
int main(){
    int n,i;
    scanf("%d", &n);
    float x[n], y[n], ans = 0;
 
    for(i = 0; i < n; i++){
        scanf("%f %f", &x[i], &y[i]);
    }
 
    ans = ans + sqrt(pow(x[0],2) + pow(y[0],2));
 
    for(i = 1; i < n; i++){
        ans = ans + sqrt(pow(x[i-1] - x[i], 2) + pow(y[i-1] - y[i],2));
    }
 
    ans = ans + sqrt(pow(x[i-1],2) + pow(y[i-1],2));
    printf("%.3f", ans);
    return 0;
 
 
}