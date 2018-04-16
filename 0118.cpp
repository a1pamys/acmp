#include <iostream>
using namespace std;
 
int main() {
 
    int n,k, c = 0,d = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
 
    int i = 0;
    while(d != n-1){
        if(a[i] == 0){
            c++;
            if(c == k){
                a[i]++;
                c = 0;
                d++;
            }
        }
        if(i == n-1){
            i = -1;
        }
        i++;
    }
 
    for(int j = 0; j < n; j++){
        if(a[j] == 0){
            cout << j+1;
            return 0;
        }
    }
 
    return 0;
}