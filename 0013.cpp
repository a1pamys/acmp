#include <iostream>
 
using namespace std;
 
int main() {
 
    char a[4], b[4];
 
    int i;
    for(i = 0; i < 4; i++){
        cin >> a[i];
        if(a[i] < '0' || a[i] > '9'){
            return 0;
        }
    }
 
    for(i = 0; i < 4; i++){
        cin >> b[i];
        if(b[i] < '0' || b[i] > '9'){
            return 0;
        }
    }
 
    if(a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] || a[2] == a[3]){
        return 0;
    }
 
    if(b[0] == b[1] || b[0] == b[2] || b[0] == b[3] || b[1] == b[2] || b[1] == b[3] || b[2] == b[3]){
        return 0;
    }
 
    int c = 0, d = 0,j;
 
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(b[i] == a[j] && i == j){
                c++;
            } else if(b[i] == a[j]){
                d++;
            }
        }
    }
 
    cout << c << " " << d;
 
    return 0;
}