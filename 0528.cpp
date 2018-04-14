#include <iostream>
using namespace std;
 
int main() {
 
    long long n,k;
 
    cin >> n >> k;
 
    cout << k+1 + ((n-2)*(1+k)*k)/2;
 
    return 0;
}