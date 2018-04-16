#include <iostream>
#include <string.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int k = int(s.size()), a = n;
     
    int i = 1;
    while(n - k*i > 0){
        a *= n - k*i;
        i++;
    }
    cout << a;
     
}