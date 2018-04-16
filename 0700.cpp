#include <iostream>
using namespace std;
 
int main() {
 
    int n,k,v,i;
    cin >> n >> v >> k;
    long long c = 0;
 
    for(i = 0; i < n; i++){
        if(v >= k*i){
            c = c + v - k*i;
        }
    }
 
    if(v - k*(i-1) <= 0){
        cout << "NO ";
    } else {
        cout << "YES ";
    }
 
    cout << c;
 
    return 0;
}