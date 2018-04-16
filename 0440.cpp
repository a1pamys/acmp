#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
    int c = 0, x, y, a[5];
 
    for(int i = 0; i < 5; i++){
        a[i] = 0;
    }
    for(int i = 0; i < 5; i++){
        cin >> x >> y;
        if(y >= -10 && y <= 10){
            if(x >= -10 && x <= 10 && a[0] == 0){
                if(float((pow(x,2) + pow(y,2)) <= 100)){
                    a[0]++;
                    c++;
                }
            } else if(x >= 15 && x <= 35 && a[1] == 0){
                if(float((pow(x-25,2) + pow(y,2)) <= 100)){
                    a[1]++;
                    c++;
                }
            } else if(x >= 40 && x <= 60 && a[2] == 0){
                if(float((pow(x-50,2) + pow(y,2)) <= 100)){
                    a[2]++;
                    c++;
                }
            } else if(x >= 65 && x <= 85 && a[3] == 0){
                if(float((pow(x-75,2) + pow(y,2)) <= 100)){
                    a[3]++;
                    c++;
                }
            } else if(x >= 90 && x <= 110 && a[4] == 0){
                if(float((pow(100-x,2) + pow(y,2)) <= 100)){
                    a[4]++;
                    c++;
                }
            }
        }
    }
 
    cout << c;
 
    return 0;
}