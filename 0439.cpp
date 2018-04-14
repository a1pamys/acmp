#include <stdio.h>
 
int main() {
 
    float n,p;
    scanf("%f %f", &n, &p);
 
    if(n < 1 || n > 1000 || p < 0 || p > 100){
        return 0;
    }
 
    printf("%.9f", 1/(p/100 + (1 - p/100)* 1/n));
 
    return 0;
}