#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string a;
 
    cin >> a;
 
    int i, b = 0, max = 0, min = 0;
 
    for(i = 0; i < 100; i++){
        if(a[i] == '1'){
            b++;
        } else if(a[i] == '2'){
            b--;
        } else if(a[i] == '\0'){
            break;
        } else {
            return 0;
        }
        if(b >= max){
            max = b;
        }
        if(b <= min){
            min = b;
        }
    }
 
    cout << max - min + 1;
 
    return 0;
}