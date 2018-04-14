#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
#include <string.h>
 
using namespace std;
 
int main() {
     
    int n=0;
    string s;
    getline(cin, s);
    int len = s.size();
     
    for(int i=0; i<len; i++){
        n += s[i] - 48;
    }
     
    if(n%3==0){
        printf("2");
    } else {
        printf("1\n%d",n%3);
    }
    return 0;
}