#include <iostream>
using namespace std;
 
int main() {
 
    long long int a;
 
    cin >> a;
 
    if(a > 1000000){
        cout << "1";
        return 0;
    }
 
    int b[a], i = 0;
    b[0] = 1;
    b[1] = 2;
 
    if(a == 0 || a == 1){
        cout << "1";
        return 0;
    }
 
    for(i = 2; i < a; i++){
        b[i] = (b[i-1] + b[i-2])%10;
    }
 
    cout << b[i-1];
 
    return 0;
}