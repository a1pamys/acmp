#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a >> b;
    if(a < 1 || a > 100 || b < 1 || b > 100){
        return 0;
    }
 
    char c[a][b];
    int i,j;
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cin >> c[i][j];
            if(c[i][j] == '.' || c[i][j] == '*'){
 
            } else {
                return 0;
            }
        }
    }
 
    int d = 0;
 
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++ ){
            if(c[i][j] == '.'){
                if(i == 0 && j == 0){
                    if(c[0][1] == '*' || c[1][0] == '*'){
                        continue;
                    } else {
                        d++;
                    }
                }
                if(i == 0 && j == b-1){
                    if(c[0][b-2] == '*' || c[1][b-1] == '*'){
                        continue;
                    } else {
                        d++;
                    }
                }
                if(i == a-1 && j == b-1){
                    if(c[a-1][b-2] == '*' || c[a-2][b-1] == '*'){
                        continue;
                    } else {
                        d++;
                    }
                }
                if(i == a-1 && j == 0){
                    if(c[a-2][0] == '*' || c[a-1][1] == '*'){
                        continue;
                    } else {
                        d++;
                    }
                }
                if(i == 0 && (j > 0 && j < b - 1)){
                    if(c[i][j-1] == '*' || c[i][j+1] == '*' || c[i+1][j] == '*'){
                        continue;
                    }
                    else {
                        d++;
                    }
                }
                if(i == a-1 && (j > 0 && j < b - 1)){
                    if(c[i][j-1] == '*' || c[i][j+1] == '*' || c[i-1][j] == '*'){
                        continue;
                    }
                    else {
                        d++;
                    }
                }
                if(j == 0 && (i > 0 && i < a - 1)){
                    if(c[i+1][j] == '*' || c[i-1][j] == '*' || c[i][j+1] == '*'){
                        continue;
                    }
                    else {
                        d++;
                    }
                }
                if(j == b-1 && (i > 0 && i < a - 1)){
                    if(c[i+1][j] == '*' || c[i-1][j] == '*' || c[i][j-1] == '*'){
                        continue;
                    }
                    else {
                        d++;
                    }
                }
                if( (i > 0 && i < a-1 && j > 0 && j < b-1)){
                    if(c[i-1][j] == '*' || c[i][j+1] == '*' || c[i+1][j] == '*' || c[i][j-1] == '*'){
                        continue;
                    } else {
                        d++;
                    }
                }
            }
            else {
                continue;
            }
        }
    }
 
    cout << d;
 
    return 0;
}