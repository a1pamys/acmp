#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    cin >> a;
 
    if(a < 1 || a > 1000000){
        return 0;
    }
 
    int sum = a, i = 1;
 
    while(sum > 0){
        sum = sum - i;
        if(sum < i + 1){
            break;
        }
        i++;
    }
 
    cout << i;
 
    return 0;
}