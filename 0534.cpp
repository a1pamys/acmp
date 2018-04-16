#include <iostream>
using namespace std;
 
int main() {
 
    int n,k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    int b[k];
    for(int i = 0; i < k; i++){
        cin >> b[i];
        a[b[i]-1]--;
    }
 
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
 
    return 0;
}