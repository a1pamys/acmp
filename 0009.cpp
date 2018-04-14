#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    if(n < 1 || n > 100){
        return 0;
    }
 
    int a[n], i;
 
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < -100 || a[i] > 100){
            return 0;
        }
    }
 
    int max = a[0], min = a[0], sum = 0, imax, imin;
 
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            sum = sum + a[i];
        }
        if(max <= a[i]){
            max = a[i];
            imax = i;
        }
        if(min >= a[i]){
            min = a[i];
            imin = i;
        }
    }
 
    int mul = 1;
 
    if(imax < imin){
        for(i = imax + 1; i < imin; i++){
            mul = mul * a[i];
        }
    } else if(imax > imin){
        for(i = imin + 1; i < imax; i++){
            mul = mul * a[i];
        }
    } else {
        mul = 0;
    }
 
    cout << sum << " " << mul;
 
    return 0;
}