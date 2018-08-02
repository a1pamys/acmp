#include <iostream>

int main() {
    
    
    int n;
    
    std::cin >> n;
    
    std::cout << 13*n/24 << " " << n/6 << " " << 7*n/24;
}


/*
 
 Find: a,b,c;
 
    a b c
 1) a-b-c 2b 2c
 2) 2(a-b-c) || 4b 2c-a+b+c-2b  -> 2(a-b-c) || 4b 3c-a-b
 3) 4(a-b-c) || 4b-2(a-b-c)-(3c-a-b) -> 4b-2a+2b+2c-3c+a+b -> 7b-a-c || 2(3c-a-b)
 
 4(a-b-c) + 7b-a-c + 6c-2a-2b = 120
 
 4(a-b-c) = n/3 ->   a -b -c = n/12     a  -b  -c  n/12     a -b -c  n/12        a 0 -2c -n/24      a 0 0 13n/24
 7b-a-c = n/3   =>  -a+7b -c = n/3  ->  0  3b  -c 5n/24 ->  0  b -c -n/8     ->  0 b  -c -n/8   ->  0 b 0   n/6
 6c-2a-2b = n/3 ->  -a -b+3c = n/6      0  -b   c  n/8      0 3b -c  5n/24       0 0   c 7n/24      0 0 c  7n/24
 
 */