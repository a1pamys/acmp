#include <iostream>
using namespace std;
 
int main() {
 
    int n, k, sum = 0, mult = 1;
    cin >> n >> k;
 
    while(n > 0){
        sum = sum + (n % k);
        mult = mult * (n % k);
        n = n/k;
    }
 
    cout << mult - sum;
 
    return 0;
}