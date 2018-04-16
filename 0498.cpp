#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
 
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * (factorial(n-1));
}
 
int main(){
     
    int n,k=2, c = 0;
    cin>>n>>k;
    vector <int> a(n);
    for(int i=1; i<= n; i++){
        a[i-1] = i;
    }
     
    while(next_permutation(a.begin(), a.end())){
        for(int i=1; i<n-1; i++){
            if(abs(a[i]-a[i-1])<=k && abs(a[i]-a[i+1])<=k){
                continue;
            } else {
                c++;
                break;
            }
        }
    }
    cout << factorial(n) - c;
    return 0;
}