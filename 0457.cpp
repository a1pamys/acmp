#include <iostream>
#include <math.h>
 
using namespace std;
 
int rec(int a, int k){
 
    int c[4], d[4], i,j, temp;
 
    for(i = 0; i < 4; i++){
        c[i] = a / pow(10,3-i);
        c[i] = c[i] % 10;
    }
 
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
 
    for(i = 0; i < 4; i++){
        d[3-i] = c[i];
    }
 
    for(i = 0; i < 4; i++){
        if(c[i] < d[i]){
            c[i-1] = c[i-1] - 1;
            c[i] = c[i] + 10;
        }
        c[i] = c[i] - d[i];
    }
 
    if(a == c[0]*1000 + c[1]*100 + c[2]*10 + c[3]){
        cout << a << endl;
        cout << k;
        return 0;
    }
 
    k++;
 
    return rec(c[0]*1000 + c[1]*100 + c[2]*10 + c[3], k);
}
 
int main() {
 
    int a,b = 0;
    cin >> a;
    if(a < 1000 || a > 9999){
        return 0;
    }
 
    rec(a, b);
 
    return 0;
}