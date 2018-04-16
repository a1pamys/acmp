#include <iostream>
using namespace std;
 
int main() {
     
    int n,m,k,c;
    cin >> n >> m >> k;
     
    if(k <= 2) {
        cout << "0";
        return 0;
    }
     
    if(n%(k-2) == 0){
        c = n/(k-2);
    } else {
        c = n/(k-2) + 1;
    }
     
    if(m/2 < c){
        cout << "0";
        return 0;
    }
     
    if((m+n)%k == 0){
        cout << (m+n)/k;
    } else {
        cout << (m+n)/k + 1;
    }
    return 0;
}