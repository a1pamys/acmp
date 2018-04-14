#include <iostream>
using namespace std;
 
int main() {
 
    int n,a,b;
    cin >> n;
 
    if(n == 3){
        cout << 1 << " " << 2;
    } else if(n == 4){
        cout << 1 << " " << 3;
    } else if(n == 6){
        cout << 1 << " " << 5;
    }
    if(n%2 == 0){
        a = n/2 - 1;
        b = n/2 + 1;
    } else {
        a = n/2;
        b = n/2 + 1;
    }
 
    for(int i = 1; i <= n/2; i++){
        for(int j = 2; j <= a; j++){
            if(a % j == 0 && b % j == 0){
                break;
            }
            cout << a << " " << b;
            return 0;
        }
        a--;
        b++;
    }
 
    return 0;
}