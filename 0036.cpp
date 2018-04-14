#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
 
using namespace std;
 
int main() {
     
    int n, c = 0;
    bool prime = true;
    cin >> n;
     
    for(int i=n+1; i<=2*n-1; i++){
        prime = true;
        for(int j=2; j<=pow(i,0.5); j++){
            if(i%j==0){
                prime = false;
                break;
            }
        }
        if(prime){
            c++;
        }
    }
     
    cout << c;
     
    return 0;
}