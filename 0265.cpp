#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int a[8][8], x1 = 0, x2 = 0, x3 = 0, x4 = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            a[i][j] = 9;
        }
    }
 
    int x,y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        a[x-1][y-1] = 0;
    }
 
    if(n == 1){
        cout << "4";
        return 0;
    }
 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(a[i][j] != 9){
                if(i == 0 && j == 0){
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                } else if(i == 0 && j == 7){
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                } else if(i == 7 && j == 0){
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                } else if(i == 7 && j == 7){
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                } else if(i == 0){
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                } else if(i == 7){
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                } else if(j == 0){
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                } else if(j == 7){
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                } else {
                    if(a[i][j-1] != 9){
                        a[i][j]++;
                    }
                    if(a[i+1][j] != 9){
                        a[i][j]++;
                    }
                    if(a[i][j+1] != 9){
                        a[i][j]++;
                    }
                    if(a[i-1][j] != 9){
                        a[i][j]++;
                    }
                }
            }
            if(a[i][j] == 1){
                x1++;
            }
            if(a[i][j] == 2){
                x2++;
            }
            if(a[i][j] == 3){
                x3++;
            }
            if(a[i][j] == 4){
                x4++;
            }
        }
    }
    int s = 0;
 
    if(x1 != 0){
        s = s + 3*x1;
    }
    if(x2 != 0){
        s = s + 2*x2;
    }
    if(x3 != 0){
        s = s + x3;
    }
 
    cout << s;
 
    return 0;
}