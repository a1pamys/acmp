#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
 
    char a[110], b[110], c[110];
 
    cin >> a >> b >> c;
 
    int num1 = strlen(a), num2 = strlen(b), num3 = strlen(c);
 
    if(num1 == num2 && num1 == num3){
        for(int i = 0; i < num1; i++){
            if(a[i] > b[i]){
                for(int j = 0; j < num1; j++){
                    if(a[j] > c[j]){
                        cout << a;
                        return 0;
                    } else if(a[j] < c[j]){
                        cout << c;
                        return 0;
                    }
                }
            } if(a[i] < b[i]){
                for(int j = 0; j < num1; j++){
                    if(b[j] > c[j]){
                        cout << b;
                        return 0;
                    } else if(b[j] < c[j]){
                        cout << c;
                        return 0;
                    }
                }
            }
        }
        cout << a;
        return 0;
    } else if(num1 >= num2 && num1 >= num3){
        if(num1 == num2){
            for(int i = 0; i < num1; i++){
                if(int(a[i]) > int(b[i])){
                    cout << a;
                    return 0;
                } else if(int(a[i]) < int(b[i])){
                    cout << b;
                    return 0;
                }
            }
        } else if(num1 == num3){
            for(int i = 0; i < num1; i++){
                if(int(a[i]) > int(c[i])){
                    cout << a;
                    return 0;
                } else if(int(a[i]) < int(c[i])){
                    cout << c;
                    return 0;
                }
            }
        }
        cout << a;
        return 0;
    } else if(num2 >= num1 && num2 >= num3){
        if(num2 == num1){
            for(int i = 0; i < num2; i++){
                if(int(b[i]) > int(a[i])){
                    cout << b;
                    return 0;
                } else if(int(b[i]) < int(a[i])){
                    cout << a;
                    return 0;
                }
            }
        } else if(num2 == num3){
            for(int i = 0; i < num2; i++){
                if(int(b[i]) > int(c[i])){
                    cout << b;
                    return 0;
                } else if(int(b[i]) < int(c[i])){
                    cout << c;
                    return 0;
                }
            }
        }
        cout << b;
        return 0;
    } else if(num3 >= num1 && num3 >= num3){
        if(num3 == num1){
            for(int i = 0; i < num3; i++){
                if(int(c[i]) > int(a[i])){
                    cout << c;
                    return 0;
                } else if(int(c[i]) < int(a[i])){
                cout << a;
                    return 0;
                }
            }
        } else if(num3 == num2){
            for(int i = 0; i < num3; i++){
                if(int(c[i]) > int(b[i])){
                    cout << c;
                    return 0;
                } else if(int(c[i]) < int(b[i])){
                    cout << b;
                    return 0;
                }
            }
        }
        cout << c;
        return 0;
    }
 
    return 0;
}