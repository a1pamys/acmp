#include <iostream>
 
using namespace std;
 
int main() {
     
     
    int n;
    cin >> n;
     
    if(n == 1) {
        cout << n+1 << " " << n+8;
    } else if(n == 8) {
        cout << n-1 << " " << n+8;
    } else if(n == 57) {
        cout << n-8 << " " << n+1;
    } else if(n == 64) {
        cout << n-8 << " " << n-1;
    } else if(n > 1 && n < 8) {
        cout << n-1 << " " << n+1 << " " << n+8;
    } else if(n%8 == 0) {
        cout << n-8 << " " << n-1 << " " << n+8;
    } else if(n > 57 && n < 64) {
        cout << n-8 << " " << n-1 << " " << n+1;
    } else if(n%8 == 1) {
        cout << n-8 << " " << n+1 << " " << n+8;
    } else {
        cout << n-8 << " " << n-1 << " " << n+1 << " " << n+8;
    }
}