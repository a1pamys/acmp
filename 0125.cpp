#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    cin >> a;
    if(a < 0 || a > 100){
        return 0;
    }
 
    int x[a][a];
 
    int i,j;
 
    for(i = 0; i < a; i++){
        for(j = 0; j < a; j++){
        cin >> x[i][j];
        }
    }
 
    int b[a];
 
    for(i = 0; i < a; i++){
        cin >> b[i];
        if(b[i] != 1 && b[i] != 2 && b[i] != 3){
            return 0;
        }
    }
 
    int c = 0;
 
    for(i = 0; i < a; i++){
        for(j = 0; j < a; j++){
            if(x[i][j] == 1){
                if(b[i] != b[j]){
                    c++;
                }
            }
        }
    }
 
    cout << c/2;
 
    return 0;
}