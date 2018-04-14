#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
 
int main() {
 
    string a;
    getline(cin,a);
 
    string n[3];
    cin >> n[0] >> n[1] >> n[2];
 
    sort(n,n+3);
 
    cout << a << ": " << n[0] << ", " << n[1] << ", " << n[2];
 
    return 0;
}