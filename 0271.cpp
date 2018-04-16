#include <stdio.h>
#include <math.h>
#include <iostream>
 
using namespace std;
 
int main() {
     
    int a;
     
    cin >> a;
     
    int b[100];
     
    b[0] = 1;
    b[1] = 1;
     
    for(int i = 2; i < 48 && a >= b[i-1]; i++){
        b[i] = b[i-1] + b[i-2];
        if(b[i] == a){
            cout << "1\n" << i+1;
            return 0;
        }
    }
     
    cout << "0";
     
    return 0;
}