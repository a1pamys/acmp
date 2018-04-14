#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    int a,s = 0;
    cin >> a;
    for(int i = 1; i < a; i++){
        int h = 0;
        int k = i;
        while(k >= 1){
            h = h * 10 + (k % 10);
            k = k / 10;
        }
        if(h + i == a){
            s++;
        }
    }
    cout << s;
    return 0;
}