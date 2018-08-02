#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
     
    int n,m,x;
     
    cin >> n >> m;
     
    vector<int> a;
     
    for(int i=0; i<n; i++) {
        cin >> x;
        a.push_back(x);
    }
     
    x=0;
    sort(a.begin(), a.end());
     
    for(int i=n-1; i>=n-m; i--) {
        if(a[i] > 0) {
            x += a[i];
        }
    }
     
    cout << x;
}