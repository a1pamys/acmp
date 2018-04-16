#include <iostream>
using namespace std;
 
int main() {
 
    int a[10000], b[10000], n;
    cin >> n;
    a[0] = 2;
    a[1] = 3;
    a[2] = 4;
    a[3] = 7;
    a[4] = 13;
 
    int x = 5;
    b[0] = 1;
 
    for(int i = 1; i < 5; x++){
        if(x != a[i-1] && x != a[i]){
            b[i] = x;
            i++;
        }
    }
 
    for(int i = 5; i < n; i++){
        a[i] = b[i-1] + b[i-3];
        for(int j = 0; j < i; j++){
            if(x == a[j]){
                x++;
                break;
            }
        }
        b[i] = x;
        x++;
    }
 
    cout << a[n-1] << "\n" << b[n-1];
 
    return 0;
}