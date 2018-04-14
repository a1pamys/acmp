#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    cin >> a;
    if( a < 0 || a > 100){
        return 0;
    }
 
    int b[a], c[a], d[a];
 
    int i;
    for(i = 0; i < a; i++){
        cin >> b[i] >> c[i] >> d[i];
        if(b[i] < 0 || b[i] > 23 || c[i] < 0 || c[i] > 59 || d[i] < 0 || d[i] > 59){
            return 0;
        }
    }
 
    int e[a];
 
    for(i = 0; i < a; i++){
        e[i] = b[i]*3600 + c[i]*60 + d[i];
    }
 
    int j, temp, temp1, temp2, temp3;
 
    for(i = 0; i < a; i++){
            temp = e[i];
            temp1 = b[i];
            temp2 = c[i];
            temp3 = d[i];
            for(j = i; j >= 0; j--){
                if( j == 0 || e[j-1] <= temp){
                    e[j] = temp;
                    b[j] = temp1;
                    c[j] = temp2;
                    d[j] = temp3;
                    break;
                } else {
                    e[j] = e[j-1];
                    b[j] = b[j-1];
                    c[j] = c[j-1];
                    d[j] = d[j-1];
                }
            }
        }
 
    for(i = 0; i < a; i++){
        cout << b[i] << " " << c[i] << " " << d[i] << "\n";
    }
 
    return 0;
}