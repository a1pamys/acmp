#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    int n,s, c = 0, i = 0;
 
    cin >> n >> s;
 
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    // INSERTION SORT
    for(i = 0; i < n; i++){
        int temp = a[i];
        int j;
        for(j = i; j >= 0; j--){
            if(j == 0 || a[j-1] <= temp){
                a[j] = temp;
                break;
            } else {
                a[j] = a[j-1];
            }
        }
    }
 
//  sort(a, a+n);  --> SORT function
     
    i = 0;
     
    while(s >= 0){
        s = s - a[i];
        c++;
        i++;
    }
 
    cout << c-1;
 
    return 0;
}