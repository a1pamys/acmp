#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
  
using namespace std;
  
int main() {
      
    long long n;

    scanf("%I64d", &n);
    printf("%I64d", max((long long)(pow(3,n/3)) * (n%3), (long long)(pow(3,n/3-1)) * (n%3+3)));

    // 2nd approach
    //cin>>n;
    //cout << max((long long)(pow(3,n/3)) * (n%3), (long long)(pow(3,n/3-1)) * (n%3+3));    
    return 0;
}
