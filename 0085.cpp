#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a >> b;
 
    if(a == b){
        for(int i = 0; i < a; i++){
            cout << "1";
        }
        return 0;
    }
    int i = max(a,b);
    while(i >= 2){
        if(a%i == 0 && b%i == 0){
            for(int z = 0; z < i; z++){
            cout << "1";
            }
            return 0;
        }
        i--;
    }
 
    cout << "1";
 
    return 0;
}