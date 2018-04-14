#include <stdio.h>
#include <math.h>
 
using namespace std;
 
static int a[100001];
 
int main() {
     
    int n,m,x;
    scanf("%d %d", &n,&m);
     
    for(int i=0; i<n;i++){
        scanf("%d", &x);
        a[x] = 1;
    }
     
    for(int i=0; i<m;i++){
        scanf("%d", &x);
        if(a[x] == 1){
            a[x] = 2;
        }
    }
     
    for(int i=0; i<100001; i++){
        if(a[i] == 2){
            printf("%d ", i);
        }
    }
     
    return 0;
}