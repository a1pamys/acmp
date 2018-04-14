#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string a,b;
    cin >> a >> b;
 
    int i = 0, j = 0;
    while(a[i] != '\0'){
        i++;
    }
 
    while(b[j] != '\0'){
        j++;
    }
 
    int c = i;
    char temp;
 
    if(i != j){
        cout << "No";
        return 0;
    } else {
        for(i = 0; i < c; i++){
            for(j = 0; j < c; j++){
                if(a[i] >= a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                if(b[i] >= b[j]){
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
    }
 
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(a[i] == b[j] || (int)a[i] == (int)b[j] + 32 || (int)a[i] == (int)b[j] - 32){
                b[j] = '*';
                break;
            }
        }
    }
 
    for(i = 0; i < c; i++){
        if(b[i] != '*'){
            cout << "No";
            return 0;
        }
    }
 
    cout << "Yes";
    return 0;
}