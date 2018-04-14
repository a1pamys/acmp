#include <iostream>
using namespace std;
 
int main() {
 
    int year, total,a,b;
 
    cin >> year >> total;
 
    int ka[year], kb[year];
    ka[0] = 1;
    kb[0] = 0;
    ka[1] = 0;
    kb[1] = 1;
 
    for(int i = 2; i < year; i++){
        ka[i] = ka[i-1] + ka[i-2];
        kb[i] = kb[i-1] + kb[i-2];
    }
 
    for(int i = 0; i < total; i++){
        if((total - kb[year-1] * i) % ka[year-1] == 0){
            b = i;
            a = (total - kb[year-1] * b) / ka[year-1];
            break;
        }
    }
 
    cout << a << " " << b << endl;
 
    return 0;
}