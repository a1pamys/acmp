#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
     
    int n;
    cin >> n;
 
    int a[302];
     
    for(int i = 0; i < 302; i++){
        a[i] = 0;
    }
    a[301] = 1;
     
    for(int i = n; i > 0; i--){
        for(int j = 0; j < 302; j++){
            a[j] = a[j] * 2;
            if(a[j] >= 10){
                a[j] = a[j]%10;
                a[j-1]++;
            }
        }
    }
     
    for(int i = 0; i < 302; i++){
        if(a[i] > 0){
            for(int j = i; j < 302; j++){
                cout << a[j];
            }
            break;
        }
    }
     
     
    return 0;
}