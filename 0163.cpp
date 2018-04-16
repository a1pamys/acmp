#include <iostream>
 
using namespace std;
 
int main() {
    char a[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    if(a[0] == 'x'){
        if(a[1] == '+'){
            cout << a[4] - a[2];
        } else {
            cout << a[4] + a[2] - '0' - '0';
        }
    } else if(a[2] == 'x'){
        if(a[1] == '+'){
            cout << a[4] - a[0];
        } else {
            cout << a[0] - a[4];
        }
    } else {
        if(a[1] == '+'){
            cout << a[2] + a[0] - '0' - '0';
        } else {
            cout << a[0] - a[2];
        }
    }
    return 0;
}