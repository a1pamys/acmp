#include <iostream>
 
using namespace std;
 
int main() {
 
    int m,n;
 
    cin >> n >> m;
    if(n < 1 || n > 100 || m < 0 || m > n*(n-1)/2){
        return 0;
    }
 
    int a[m],b[m],i,j,c[n];
 
    for(i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        if(a[i] < 1 || a[i] > n || b[i] < 1 || b[i] > n || a[i] == b[i]){
            return 0;
        }
    }
 
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            if(a[i] == b[j] && b[i] == a[j]){
                return 0;
            }
        }
    }
 
    for(i = 0; i < n; i++){
        c[i] = 0;
    }
 
    for(i = 1; i <= n; i++){
        for(j=0; j < m; j++){
            if(i == a[j] || i == b[j]){
                c[i-1]++;
            }
        }
    }
 
    for(i = 0; i < n; i++){
        cout << c[i] << " ";
    }
 
    return 0;
}