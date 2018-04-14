#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
     
    double x, y, x1, y1, x2, y2, x3, y3, midX, midY;
    double area = 0, resArea = 0, p, a, b, c;
     
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x, &y);
     
    midX = (x1 + x2 + x3)/3;
    midY = (y1 + y2 + y3)/3;
     
 
    a = sqrt(pow(midX-x1, 2) + pow(midY-y1, 2));
    b = sqrt(pow(midX-x2, 2) + pow(midY-y2, 2));
    c = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    p = (a + b + c)/2;
    area += sqrt(p*(p-a)*(p-b)*(p-c));
     
    a = sqrt(pow(midX-x1, 2) + pow(midY-y1, 2));
    b = sqrt(pow(midX-x3, 2) + pow(midY-y3, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    p = (a + b + c)/2;
    area += sqrt(p*(p-a)*(p-b)*(p-c));
     
    a = sqrt(pow(midX-x3, 2) + pow(midY-y3, 2));
    b = sqrt(pow(midX-x2, 2) + pow(midY-y2, 2));
    c = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    p = (a + b + c)/2;
    area += sqrt(p*(p-a)*(p-b)*(p-c));
     
    a = sqrt(pow(x-x1, 2) + pow(y-y1, 2));
    b = sqrt(pow(x-x2, 2) + pow(y-y2, 2));
    c = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    p = (a + b + c)/2;
    resArea += sqrt(p*(p-a)*(p-b)*(p-c));
 
    a = sqrt(pow(x-x3, 2) + pow(y-y3, 2));
    b = sqrt(pow(x-x2, 2) + pow(y-y2, 2));
    c = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    p = (a + b + c)/2;
    resArea += sqrt(p*(p-a)*(p-b)*(p-c));
     
    a = sqrt(pow(x-x1, 2) + pow(y-y1, 2));
    b = sqrt(pow(x-x3, 2) + pow(y-y3, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    p = (a + b + c)/2;
    resArea += sqrt(p*(p-a)*(p-b)*(p-c));
     
    if(abs(area - resArea) < 0.001) {
        printf("In\n");
    } else {
        printf("Out\n");
    }
     
    return 0;
}