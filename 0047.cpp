#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    scanf("%d", &n);
    vector<int> a(n+1,0);
    
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            a[i]++;
        }
    }
    
    int maxSum=-1, maxNum=999999, tempMaxSum, tempNum;
    
    for(int i=0; i<=n; i++) {
        if(a[i] > 0) {
            tempMaxSum = 0;
            tempNum = i;
            while(tempNum > 0) {
                tempMaxSum += tempNum%10;
                tempNum /= 10;
            }
            if(maxSum < tempMaxSum) {
                maxSum = tempMaxSum;
                maxNum = i;
            } else if(maxSum == tempMaxSum) {
                if(maxNum > i) {
                    maxNum = i;
                }
            }
        }
    }
    
    printf("%d", maxNum);
    
    return 0;
}
