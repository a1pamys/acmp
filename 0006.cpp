#include <iostream>
#include<string>
using namespace std;
 
int main() {
 
    string a;
    cin >> a;
 
        if((a[0] < 'A' || a[0] > 'H') || (a[1] < '1' || a[1] > '8') || (a[2] != '-') ||
                (a[3] < 'A' || a[3] > 'H') || (a[4] < '1' || a[4] > '8')){
            cout << "ERROR";
            return 0;
        }
 
    if(a[3] == a[0] + 2 && (a[4] == a[1] + 1 || a[4] == a[1] - 1)){
        cout << "YES";
    } else if(a[3] == a[0] + 1 && (a[4] == a[1] + 2 || a[4] == a[1] - 2)){
        cout << "YES";
    } else if(a[3] == a[0] - 1 && (a[4] == a[1] + 2 || a[4] == a[1] - 2)){
        cout << "YES";
    } else if(a[3] == a[0] - 2 && (a[4] == a[1] + 1 || a[4] == a[1] - 1)){
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}