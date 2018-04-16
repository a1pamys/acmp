#include <iostream>
using namespace std;
 
int main() {
     
    int n, c = 0, h,m;
    cin >> n;
     
    if(n == 1 || n == 2){
        cout << "0 0";
        return 0;
    }
     
    if(n > 145){
        cout << "NO";
        return 0;
    }
     
    if(n % 2 == 0){
        c = 10 * ((n-1)/2);
        h = c/60; m = c % 60 + 5;
        if(m >= 60){
            h++;
            m = m - 60;
        }
    } else {
        c = 10 * (n/2);
        h = c/60; m = (c % 60);
         
    }
     
    cout << h << " " << m;
     
    return 0;
}