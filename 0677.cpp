#include <iostream>
using namespace std;
 
int main() {
 
    int a,b,c,d;
 
    cin >> a >> b >> c >> d;
 
    int i = 1;
 
    while(i < 100000){
        if(i % a == 0 && i % b == 0 && i % c == 0 && (i - i/a - i/b - i/c == d)){
                    cout << i;
                    return 0;
        }
        i++;
    }
 
    cout << "-1";
 
    return 0;
}