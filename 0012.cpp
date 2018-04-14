#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
     
    int a;
    cin >> a;
     
    int x[a], y[a], x1[a], y1[a], x2[a], y2[a], x3[a], y3[a], x4[a], y4[a], midX, midY;
    int i, ans = 0;
    double area[a], resArea[a], p, b, c, d;
     
    for(i = 0; i < a; i++) {
        area[i] = 0;
        resArea[i] = 0;
        scanf("%d %d %d %d %d %d %d %d %d %d", &x[i], &y[i], &x1[i], &y1[i], &x2[i], &y2[i], &x3[i], &y3[i], &x4[i], &y4[i]);
        midX = (x1[i] + x2[i] + x3[i] + x4[i])/4;
        midY = (y1[i] + y2[i] + y3[i] + y4[i])/4;
        b = sqrt(pow(midX-x1[i], 2) + (pow(midY-y1[i], 2)));
        c = sqrt(pow(midX-x2[i], 2) + (pow(midY-y2[i], 2)));
        d = sqrt(pow(x2[i]-x1[i], 2) + (pow(y2[i]-y1[i], 2)));
        p = (b + c + d)/2;
        area[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        b = sqrt(pow(midX-x2[i], 2) + (pow(midY-y2[i], 2)));
        c = sqrt(pow(midX-x3[i], 2) + (pow(midY-y3[i], 2)));
        d = sqrt(pow(x3[i]-x2[i], 2) + (pow(y3[i]-y2[i], 2)));
        p = (b + c + d)/2;
        area[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        b = sqrt(pow(midX-x3[i], 2) + (pow(midY-y3[i], 2)));
        c = sqrt(pow(midX-x4[i], 2) + (pow(midY-y4[i], 2)));
        d = sqrt(pow(x4[i]-x3[i], 2) + (pow(y4[i]-y3[i], 2)));
        p = (b + c + d)/2;
        area[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        b = sqrt(pow(midX-x1[i], 2) + (pow(midY-y1[i], 2)));
        c = sqrt(pow(midX-x4[i], 2) + (pow(midY-y4[i], 2)));
        d = sqrt(pow(x4[i]-x1[i], 2) + (pow(y4[i]-y1[i], 2)));
        p = (b + c + d)/2;
        area[i] += sqrt(p*(p-b)*(p-c)*(p-d));
    }
     
    for(int i=0; i<a; i++) {
        b = sqrt(pow(x[i]-x1[i], 2) + (pow(y[i]-y1[i], 2)));
        c = sqrt(pow(x[i]-x2[i], 2) + (pow(y[i]-y2[i], 2)));
        d = sqrt(pow(x2[i]-x1[i], 2) + (pow(y2[i]-y1[i], 2)));
        p = (b + c + d)/2;
        if(sqrt(p*(p-b)*(p-c)*(p-d)) > 0) {
            resArea[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        }
        b = sqrt(pow(x[i]-x2[i], 2) + (pow(y[i]-y2[i], 2)));
        c = sqrt(pow(x[i]-x3[i], 2) + (pow(y[i]-y3[i], 2)));
        d = sqrt(pow(x3[i]-x2[i], 2) + (pow(y3[i]-y2[i], 2)));
        p = (b + c + d)/2;
        if(sqrt(p*(p-b)*(p-c)*(p-d)) > 0) {
            resArea[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        }
        b = sqrt(pow(x[i]-x3[i], 2) + (pow(y[i]-y3[i], 2)));
        c = sqrt(pow(x[i]-x4[i], 2) + (pow(y[i]-y4[i], 2)));
        d = sqrt(pow(x4[i]-x3[i], 2) + (pow(y4[i]-y3[i], 2)));
        p = (b + c + d)/2;
        if(sqrt(p*(p-b)*(p-c)*(p-d)) > 0) {
            resArea[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        }
        b = sqrt(pow(x[i]-x1[i], 2) + (pow(y[i]-y1[i], 2)));
        c = sqrt(pow(x[i]-x4[i], 2) + (pow(y[i]-y4[i], 2)));
        d = sqrt(pow(x4[i]-x1[i], 2) + (pow(y4[i]-y1[i], 2)));
        p = (b + c + d)/2;
        if(sqrt(p*(p-b)*(p-c)*(p-d)) > 0) {
            resArea[i] += sqrt(p*(p-b)*(p-c)*(p-d));
        }
        if(abs(area[i] - resArea[i]) < 0.001) {
            ans++;
        }
    }
     
    printf("%d", ans);
     
    return 0;
}