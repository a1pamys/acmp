#include <iostream>
using namespace std;
 
int main() {
 
    int n,n3,n5;
 
    cin >> n;
 
    for(n3 = 0; n3 < 5; n3++){
        if((n - n3 * 3)%5 == 0){
            n5 = (n - n3 * 3)/5;
            cout << n5 << " " << n3;
        }
    }
 
    return 0;
}