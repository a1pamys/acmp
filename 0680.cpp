#include <iostream>
#include <cmath>
#include <vector>
 
using namespace std;
 
vector<int> a(20,0);
int carry = 0, digits = 1;
void multiply() {
    for(int i=0; i<digits; i++) {
        a[i] *= 2;
        a[i] += carry;
        carry = 0;
        if(a[digits-1] >= 10) {
            digits++;
        }
        if(a[i] >= 10) {
            carry++;
            a[i] %= 10;
        }
    }
}
 
int main() {
     
    int n;
    scanf("%d", &n);
    a[0] = 3;
     
    for(int i=0; i<n-1; i++) {
        multiply();
    }
     
    for(int i=digits-1; i>=0; i--) {
            printf("%d", a[i]);
    }
 
    return 0;
}