#include <iostream>
 
int main() {
     
    double n, a=0, i=2;
     
    std::cin >> n;
 
    while(a < n) {
        a += 1/i;
        i++;
    }
     
    std::cout << i-2 << " card(s)";
}