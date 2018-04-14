#include <iostream>
using namespace std;
 
int main() {
 
    int w,h,n;
    cin >> w >> h >> n;
 
    int x[w][h];
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            x[i][j] = 0;
        }
    }
 
    int x1,y1,x2,y2;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                x[j][k]++;
            }
        }
    }
 
    int c = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(x[i][j] == 0){
                c++;
            }
        }
    }
 
    cout << c;
 
 
    return 0;
}