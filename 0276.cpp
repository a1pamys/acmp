#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a >> b;
    if(a < 1 || a > 30000 || b < 1 || b > 30000){
        return 0;
    }
 
    int c[b],i, sum = a/b * b, d = a - sum;
    for(i = 0; i < b; i++){
        c[i] = a/b;
    }
 
    for(i = b-1; i >= 0; i--){
        if(d > 0){
            c[i]++;
            d--;
        }
    }
 
    for(i = 0; i < b; i++){
        cout << c[i] << " ";
    }
 
    return 0;
}