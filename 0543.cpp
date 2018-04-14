#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,w,d,p;
 
    cin >> n >> w >> d >> p;
 
    if(n < 2 || n > 8000 || w < 1 || w > 30 || d < 1 || d > 30){
        return 0;
    }
 
    if(p < w*(n*(n-1)/2)- d*(n-1) || p > w*(n*(n-1)/2)){
        return 0;
    }
 
    int e = (w*(n*(n-1)/2) - p)/d;
 
    if(e > 0){
        cout << e;
    } else {
        cout << n;
    }
 
    return 0;
}