#include <iostream>
 
using namespace std;
 
int main() {
 
    int k;
    cin >> k;
 
    if(k < 1 || k > 1001){
        return 0;
    }
 
    int a[k], i;
 
    for(i = 0; i < k; i++){
        cin >> a[i];
        if(a[i] < 1 || a[i] > 30000){
            return 0;
        }
    }
 
    for (i = 0; i < k; i++) {
                int temp = a[i];
                int j;
                for (j = i; j >= 0; j--) {
                    if (j == 0 || a[j-1] <= temp) {
 
                        a[j] = temp;
                        break;
 
                    } else {
                        a[j] = a[j - 1];
                    }
                }
            }
 
    int c = 0;
 
    for(i = 0; i < k/2 + 1; i++){
        if(a[i] == 1){
            c++;
        } else {
            c = c + a[i]/2 +1;
        }
    }
 
    cout << c;
 
    return 0;
}