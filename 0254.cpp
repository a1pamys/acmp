#include <iostream>
using namespace std;
 
int main() {
 
    int n,m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    cin >> m;
    int b[m],c[m];
    for(int i = 0; i < m; i++){
        cin >> b[i] >> c[i];
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                a[i] = c[j];
                break;
            }
        }
        cout << a[i] << " ";
    }
 
    return 0;
}