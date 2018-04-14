#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a >> b;
    if(a < 1 || a > 10000 || b < 1 || b > 10000){
        return 0;
    }
 
     do{
         a = a % 10;
     } while(a > 10);
 
     if(b == 1){
         cout << a;
         return 0;
     }
 
     if(a == 0){
        cout << "0";
        return 0;
     } else if(a == 1){
        cout << "1";
        return 0;
     } else if(a == 5){
        cout << "5";
        return 0;
     } else if(a == 6){
        cout << "6";
        return 0;
     } else if(a == 9){
         if(b % 2 == 0){
             cout << "1";
         } else {
             cout << "9";
         }
         return 0;
     } else if(a == 4){
         if(b % 2 == 0){
             cout << "6";
         } else {
             cout << "4";
         }
         return 0;
    }
 
     if(a == 2 || a == 3 || a == 7 || a == 8){
         b = b % 4;
         if(b == 0){
             a = pow(a,4);
             cout << a % 10;
             return 0;
         }
         a = pow(a,b);
         cout << a % 10;
     }
 
    return 0;
}