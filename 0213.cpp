#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n, bonus, tries, max=0;
    
    scanf("%d", &n);
    vector<int> points(n), results;
    
    for(int i=0; i<n; i++) {
        scanf("%d", &points[i]);
    }
    
    scanf("%d %d", &bonus, &tries);
    
    for(int i=0; i<tries; i++) {
        int temp = 0;
        int full = 1;
        for(int j=0; j<n; j++) {
            int var;
            scanf("%d", &var);
            if(var == 1) {
                temp += points[j];
            } else {
                full = 0;
            }
            
        }
        temp -= (i)*2;
        if(full == 1) {
            temp += bonus;
        }
        if(temp < 0) {
            temp = 0;
        }
        if(temp > max) {
            max = temp;
        }
        results.push_back(max);
    }

    for(int i=0; i<results.size(); i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}
