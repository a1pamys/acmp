#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
    // hour [0,23] minutes [1,59] != 30
 
    int h1,m1,h2,m2,x = 0,b,c;
 
    cin >> h1 >> m1 >> h2 >> m2;
 
    if(h1 > h2){
        h2 = 24 + h2;
    }
 
    if(h1 == h2 && m1 > m2){
        h2 = 24 + h2;
    }
 
    for(int i = h1 + 1; i <= h2; i++){
        c = i % 12;
        if(c == 0){
            c = 12;
        }
        x = x + c;
    }
 
    b = abs(h1-h2) + 1;
    if(m1 > 30){
        b--;
    }
    if(m2 < 30){
        b--;
    }
 
    x = x + b;
 
    cout << x;
 
    return 0;
}