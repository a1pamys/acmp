#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
 
    cin >> a >> b;
 
    if(a < 1 || a > 100 || b < 1 || b > 100){
        return 0;
    }
 
    char c[a][b];
 
    int i,j, e[a];
 
    for(i = 0; i < a; i++){
        for(j = 0; j  < b; j++){
            cin >> c[i][j];
            if(c[i][j] == 'A' || c[i][j] == 'B' || c[i][j] == '.'){
 
            } else {
                return 0;
            }
        }
    }
 
    for(i = 0; i < a; i++){
        if(c[i][0] == '.' || c[i][b-1] == '.'){
            return 0;
        }
        e[i] = 0;
    }
 
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            if(c[i][j] == '.'){
                e[i]++;
            }
        }
    }
 
    int f = e[0];
 
    for(i = 0; i < a; i++){
        if(f >= e[i]){
            f = e[i];
        }
    }
 
    cout << f;
 
    return 0;
}