#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,i,j;
    cin >> a >> b;
    if(a < 1 || a > 100 || b < 1 || b > 100){
        return 0;
    }
 
    char c[a][b];
 
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cin >> c[i][j];
            if(c[i][j] == '.' || c[i][j] == 'R' || c[i][j] == 'G' || c[i][j] == 'B'){
 
            } else {
                return 0;
            }
        }
    }
 
    int d[a][b];
 
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cin >> d[i][j];
            if(d[i][j] < 0 || d[i][j] > 7){
                return 0;
            }
        }
    }
 
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            if(d[i][j] == 0){
                if(c[i][j] == '.'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 1){
                if(c[i][j] == '.' || c[i][j] == 'B'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 2){
                if(c[i][j] == '.' || c[i][j] == 'G'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 3){
                if(c[i][j] == '.' || c[i][j] == 'B' || c[i][j] == 'G'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 4){
                if(c[i][j] == '.' || c[i][j] == 'R'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 5){
                if(c[i][j] == '.' || c[i][j] == 'R' || c[i][j] == 'B'){
                } else {
                    cout << "NO";
                    return 0;
                }
            } else if(d[i][j] == 6){
                if(c[i][j] == '.' || c[i][j] == 'R' || c[i][j] == 'G'){
                } else {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
 
    cout << "YES";
 
    return 0;
}