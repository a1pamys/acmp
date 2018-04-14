#include <iostream>
 
using namespace std;
 
int main() {
 
    int a1,b1,a2,b2,a3,b3,k,w;
 
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(k < 1 || k > 15 || w < 1 || w > 30 || a1 < 1 || a2 < 1 || a3 < 1 || a1 > 10 || a2 > 10 || a3 > 10 || b1 < 1 || b2 < 1 || b3 < 1 || b1 > 15 || b2 > 15 || b3 > 15){
        return 0;
    }
 
    if(a1 <= w && b1 >= k){
        cout << "YES";
    } else if(a2 <= w && b2 >= k){
        cout << "YES";
    } else if(a3 <= w && b3 >= k){
        cout << "YES";
    } else if(a1+a2 <= w && b1+b2 >= k){
        cout << "YES";
    } else if(a1+a3 <= w && b1+b3 >= k){
        cout << "YES";
    } else if(a2+a3 <= w && b2+b3 >= k){
        cout << "YES";
    } else if(a1+a2+a3 <= w && b1+b2+b3 >= k){
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}