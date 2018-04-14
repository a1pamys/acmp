#include <stdio.h>
#include <math.h>
using namespace std;
 
int main() {
 
    int n;
    scanf("%d", &n);
 
    float x = 0.0, y = 0.0;
 
    int d[n], s[n];
    for(int i = 0; i < n; i++){
        scanf("%i %i", &d[i], &s[i]);
        if(d[i] == 1){
            y = y + s[i];
        }
        if(d[i] == 2){
            x = x + s[i]/sqrt(2);
            y = y + s[i]/sqrt(2);
        }
        if(d[i] == 3){
            x = x + s[i];
        }
        if(d[i] == 4){
            x = x + s[i]/sqrt(2);
            y = y - s[i]/sqrt(2);
        }
        if(d[i] == 5){
            y = y - s[i];
        }
        if(d[i] == 6){
            x = x - s[i]/sqrt(2);
            y = y - s[i]/sqrt(2);
 
        }
        if(d[i] == 7){
            x = x - s[i];
        }
        if(d[i] == 8){
            x = x - s[i]/sqrt(2);
            y = y + s[i]/sqrt(2);
        }
    }
 
    if((int)x == 0){
        x = 0.000;
    }
    if((int)y == 0){
        y = 0.000;;
    }
    printf("%.3f %.3f", x,y);
 
    return 0;
}