#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
     
    int n;
    scanf("%d", &n);
     
    printf("%d", int(pow(2,n))-n-1);
     
    return 0;
}