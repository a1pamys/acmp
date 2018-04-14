#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
     
    string p1,p2;
    int ans = 1;
     
    getline(cin, p1);
    getline(cin, p2);
     
    for(int i=0; i<p1.length(); i++) {
        if(p1[i] == '?') {
            if(p2[i] == '?') {
                ans *= 10;
            } else if(p2[i] >= 'a' && p2[i] <= 'g') {
                ans *= 4;
            }
        } else if(p1[i] >= 'a' && p1[i] <= 'g') {
            if(p2[i] == '?') {
                ans *= 4;
            } else if(p2[i] >= 'a' && p2[i] <= 'g') {
                if(abs(p2[i] - p1[i]) < 4 ) {
                    ans *= (4-abs(p2[i] - p1[i]));
                } else {
//                    printf("HERE1");
                    ans *= 0;
                    break;
                }
            } else if(p2[i] >= '0' && p2[i] <= '9'){
                if(p1[i]-p2[i] >= 46 && p1[i]-p2[i] <= 49) {
                    ans *= 1;
                } else {
//                    printf("HERE3");
                    ans *= 0;
                    break;
                }
            }
        } else {
            if(p2[i] == '?') {
                ans *= 1;
            } else if(p2[i] >= 'a' && p2[i] <= 'g') {
                if(p1[i]-p2[i] >= 46 && p1[i]-p2[i] <= 49) {
                    ans *= 1;
                } else {
//                    printf("HERE4");
                    ans *= 0;
                    break;
                }
            } else if(p2[i] >= '0' && p2[i] <= '9') {
                if(p1[i] != p2[i]) {
//                    printf("HERE5");
                    ans *= 0;
                    break;
                }
            }
        }
    }
 
    printf("%d", ans);
    return 0;
}