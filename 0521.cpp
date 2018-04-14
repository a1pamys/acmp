#include <iostream>
using namespace std;
 
int main() {
 
    int a,b;
 
    cin >> a >> b;
 
    if(a < 2 || a > b || b < 2 || b > 1000){
        return 0;
    }
 
    int i, x[b-a+1];
 
    for(i = 0; i < b - a + 1; i++){
        x[i] = a + i;
    }
 
    int d = 0;
 
    for(i = 0; i < b - a + 1; i++){
        if(x[i] == 2){
 
        } else {
            while(x[i] != 2){
                if(x[i] % 2 == 0){
                    x[i] = x[i] / 2;
                    d++;
                } else {
                    x[i] = x[i] * 3 + 1;
                    d++;
                }
            }
        }
    }
 
    cout << d;
 
    return 0;
}