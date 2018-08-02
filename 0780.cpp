#include <iostream>
 
int main() {
     
     
    int n, i=1;
     
    std::cin >> n;
     
    while(n != 0) {
        n -= i;
        i++;
    }
     
    std::cout << i-1;
}