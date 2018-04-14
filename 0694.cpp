#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    int min = 0, max = 32, a,b;
 
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a > min){
            min = a;
        }
        if(b < max){
            max = b;
        }
        if(min > max){
            cout << "NO";
            return 0;
        }
 
    }
 
    cout << "YES";
 
    return 0;
}