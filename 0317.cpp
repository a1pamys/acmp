#include <iostream>
using namespace std;
 
int main() {
 
    int x,y,z,w, c = 0;
 
    cin >> x >> y >> z >> w;
 
    for(int i = 0; i <= w/x; i++){
        for(int j = 0; j <= w/y; j++){
            if(w >= i*x + j*y){
                if((w - i*x - j*y)%z == 0){
                    c++;
                }
            }
        }
    }
 
    cout << c;
 
    return 0;
}