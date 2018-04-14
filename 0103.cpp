#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
     
    string s1,s2, gs, ss;
    cin >> s1 >> s2;
     
    if(s1 == "0" && s2 == "0"){
        cout << "0";
        return 0;
    }
     
    if(s1 > s2){
        gs = s1;
        ss = s2;
    } else {
        gs = s2;
        ss = s1;
    }
    int l1 = gs.length(), l2 = ss.length();
     
    int a[102],b[102];
     
    for(int i = 0; i < 102; i++){
        a[i] = 0;
        b[i] = 0;
    }
     
    for(int i = 101; i >= 0; i--){
        if(l1 < 1) {
            break;
        }
        a[i] = gs[l1-1] - '0';
        l1--;
    }
     
    for(int i = 101; i >= 0; i--){
        if(l2 < 1) {
            break;
        }
        b[i] = ss[l2-1] - '0';
        l2--;
    }
     
    int i = 101;
     
    while(i > 0){
        a[i] = a[i] + b[i];
        if(a[i] >= 10){
            a[i] = a[i]%10;
            a[i-1] += 1;
        }
        i--;
    }
     
    for(int i = 0; i < 102; i++){
        if(a[i] > 0){
            for(int j = i; j < 102; j++){
                cout << a[j];
            }
            break;
        }
    }
     
    return 0;
}