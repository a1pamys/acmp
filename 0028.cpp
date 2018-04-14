#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
     
    long int x, y, x1, y1, x2, y2, q = 0;
    scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x, &y);
     
     
    if(y1 == y2) {
        while(x2 != x) {
            if(x > x2) {
                x2++;
            } else {
                x2--;
            }
        }
        printf("%ld %ld ", x2, 2*y2-y);
    }
    if(x1 == x2) {
        while(y2 != y) {
            if(y > y2) {
                y2++;
            } else {
                y2--;
            }
        }
        printf("%ld %ld ", 2*x2-x, y2);
    }
     
    return 0;
}