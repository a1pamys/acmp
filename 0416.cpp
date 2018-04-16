#include <iostream>
using namespace std;
 
int main() {
 
    char a[3];
    cin >> a;
 
    if(a[0]+2 >= 'c' && a[0]+2 <= 'h'){
        if(a[1] + 1 >= '2' && a[1] + 1 <= '8'){
            cout << char(a[0]+2) << char(a[1]+1) << endl;
        }
        if(a[1] - 1 >= '1' && a[1] - 1 <= '7'){
            cout << char(a[0]+2) << char(a[1]-1)<< endl;
        }
    }
    if(a[0]+1 >= 'b' && a[0]+1 <= 'h'){
        if(a[1] + 2 >= '3' && a[1] + 2 <= '8'){
            cout << char(a[0]+1) << char(a[1]+2)<< endl;
        }
        if(a[1] - 2 >= '1' && a[1] - 2 <= '6'){
            cout << char(a[0]+1) << char(a[1]-2)<< endl;
        }
    }
    if(a[0]-1 >= 'a' && a[0]-1 <= 'g'){
        if(a[1] + 2 >= '3' && a[1] + 2 <= '8'){
            cout << char(a[0]-1) << char(a[1]+2) << endl;
        }
        if(a[1] - 2 >= '1' && a[1] - 2 <= '6'){
            cout << char(a[0]-1) << char(a[1]-2)<< endl;
        }
    }
    if(a[0]-2 >= 'a' && a[0]-2 <= 'f'){
        if(a[1] + 1 >= '2' && a[1] + 1 <= '8'){
            cout << char(a[0]-2) << char(a[1]+1) << endl;
        }
        if(a[1] - 1 >= '1' && a[1] - 1 <= '7'){
            cout << char(a[0]-2) << char(a[1]-1) << endl;
        }
    }
 
 
    return 0;
}