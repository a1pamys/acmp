#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
int main() {
 
    string a;
    getline(cin,a);
 
    int b = 0;
 
    while(a[b] != '\0'){
        b++;
    }
 
    int even = 0, odd = 0;
 
    for(int i = 0; i < b; i++){
        if((i+1) % 2 == 1){
            odd = odd + (a[i] - '0');
        }
        if((i+1) % 2 == 0){
            even = even + (a[i] - '0');
        }
    }
 
    if(abs(even-odd) % 11 == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}