#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char c[5];
    
    for(int i=0; i<5; i++) {
        cin >> c[i];
    }
    
    do {
        c[4] = char(c[4] + 1);
        if(c[4] == char('0' + 10)) {
            c[4] = '0';
            c[3] = char(c[3]+1);
        }
        if(c[3] == '6') {
            c[3] = '0';
            c[1] = char(c[1]+1);
        }
        
        if(c[0] == '2' && c[1] == '4') {
            c[0] = '0';
            c[1] = '0';
        }
        
        if(c[1] == char('0' + 10)) {
            c[1] = '0';
            c[0] = char(c[0]+1);
        }
    } while(c[0] != c[4] || c[1] != c[3]);
    
    for(int i=0; i<5; i++) {
        cout << c[i];
    }
}