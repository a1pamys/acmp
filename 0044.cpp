#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 
    char a[251];
    cin >> a;
    int x = strlen(a), c = 0;
 
    for(int i = 0; i < x-4; i++){
        if(a[i] == '>' && a[i+1] == '>'){
            if(a[i+2] == '-' && a[i+3] == '-'){
                if(a[i+4] == '>'){
                    c++;
                }
            }
        }
        if(a[i] == '<'){
            if(a[i+1] == '-' && a[i+2] == '-'){
                if(a[i+3] == '<' && a[i+4] == '<'){
                    c++;
                }
            }
        }
    }
 
    cout << c;
 
    return 0;
}