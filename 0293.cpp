#include <stdio.h>
using namespace std;
 
int main() {
 
    int n,b,c = 0;
 
    scanf("%d", &n);
    int a[n], max = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
 
    for(int i = 0; i < n; i++){
        scanf("%d", &b);
        if(max < (a[i] * b)){
            max = (a[i]*b);
            c = i;
        }
    }
 
    printf("%d", c+1);
 
    return 0;
}