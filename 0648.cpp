#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    if( n < 2 || n > 100 || n % 2 == 1){
        return 0;
    }
 
    int a[n], i;
 
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 1 || a[i] > 1000000){
            return 0;
        }
    }
 
        for (i = 0; i < n; i++) {
            int toInsert = a[i];
            int j;
            for (j = i; j >= 0; j--) {
                if (j == 0 || a[j-1] <= toInsert) {
 
                    a[j] = toInsert;
                    break;
 
                } else {
                    a[j] = a[j - 1];
                }
            }
        }
 
        int c = 0, d = 0;
 
        for(i = n/2; i < n; i++){
            c = c + a[i];
        }
 
        for(i = 0; i < n/2; i++){
                    d = d + a[i];
                }
 
        cout << c - d;
 
    return 0;
}