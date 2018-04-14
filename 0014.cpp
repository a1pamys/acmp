#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
 
    cin >> a >> b;
    if(a < 1 || a > 46340 || b < 1 || b > 46340){
        return 0;
    }
 
    int i = a;
    if(a <= b){
        i = b;
    }
 
    while(i > 0){
        if(a % i == 0 && b % i == 0){
            cout << a*b/i;
            break;
        }
        i--;
    }
 
    return 0;
}