#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
 
int main() {
 
    string a;
 
    getline(cin, a);
 
    int n = 0, count = 0;
 
    while(a[n] != '\0'){
        if(a[n] == ' '){
            count++;
        }
        n++;
    }
 
    int x[count+1], p = 0, temp = count;
    for(int i = 0; i < count + 1; i++){
        x[i] = 0;
    }
 
    for(int i = n-1; i >= 0; i--){
        p = 0;
        while(a[i] >= '0' && a[i] <= '9'){
            x[temp] = x[temp] + (a[i] - '0') * pow(10, p);
            if(i == 0){
                break;
            }
            i--;
            p++;
        }
        if(a[i] == '-'){
            x[temp] = -x[temp];
        }
        if(a[i] == ' '){
            temp--;
        }
    }
 
    int max = x[1], min = x[0];
 
    for(int i = 2; i < count+1; i++){
        if((i+1) % 2 == 0){
            if(max <= x[i]){
                max = x[i];
            }
        }
        if((i+1) % 2 == 1){
            if(min >= x[i]){
                min = x[i];
            }
        }
    }
 
    cout << max + min;
 
    return 0;
}