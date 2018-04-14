#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 
    char a[81];
    cin >> a;
 
    int x = strlen(a), i, counter = 0,c;
 
    for(i = 0; i < x; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            if(i == 0 || (a[i-1] >= 'A' && a[i-1] <= 'Z')){
                if(counter % 40 == 0){
                    cout << "\n";
                }
                cout << a[i];
                counter++;
            } else {
                if((a[i-1] >= '0' && a[i-1] <= '9') && (a[i-2] >= '0' && a[i-2] <= '9')){
                    c = (a[i-2] - '0')*10 + a[i-1] - '0';
                    for(int j = 0; j < c; j++){
                        if(counter % 40 == 0){
                            cout << "\n";
                        }
                        cout << a[i];
                        counter++;
                    }
                } else if(a[i-1] >= '0' && a[i-1] <= '9'){
                    for(int j = 0; j < a[i-1] - '0'; j++){
                        if(counter % 40 == 0){
                            cout << "\n";
                        }
                        cout << a[i];
                        counter++;
                    }
                }
            }
        }
    }
 
    return 0;
}