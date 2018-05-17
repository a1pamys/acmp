#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int superFunction(int n, int fctr) {
    while(n%fctr==0) {
        printf("%d",fctr);
        if(n/fctr>1) {
            printf("*");
        }
        n /= fctr;
    }
    return n;
}

int main() {
    
    int n;
    bool isPrime;
    scanf("%d", &n);
    
    //finding sqrt of N
    int sqrtN = int(sqrt(double(n)));
    
    //making a vector of prime numbers
    vector<int> primeNums;
    primeNums.push_back(2);
    
    //calling a function
    n = superFunction(n, 2);
    
    for(int i=3; i<=sqrtN; i++) {
        isPrime = true;
        for(int k=0; k<primeNums.size(); k++) {
            if(i % primeNums[k] == 0) {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) {
            primeNums.push_back(i);
        }
        
        //calling a function
        n = superFunction(n, *(primeNums.end()-1));
    }
    
    //print if n>1
    if(n>1) {
        printf("%d",n);
    }
    
    return 0;
}

/* better approach
 
 int main() {
 
     int n,i=2;
     scanf("%d", &n);
 
     int sqrtN = int(sqrt(double(n)));
 
     while(i<=sqrtN) {
         if(n%i==0){
             printf("%d", i);
             n /= i;
             if(n>1) {
                printf("*");
             }
         } else {
            i++;
         }
     }
 
     if(n>1) {
        printf("%d", n);
     }
 
     return 0;
 }
 
 */

