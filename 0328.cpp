#include <iostream>
using namespace std;
 
int main() {
 
    long long n;
 
    cin >> n;
 
//  long s = 0;
//  for(int i = 0; i <= n; i++){
//      s = s + (n+2)*i;
//  }
 
    cout << (n)*(n+1)*(n+2)/2;
 
    return 0;
}