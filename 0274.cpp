#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int n;
    char c = '9';
    scanf("%d", &n);
    vector<int> ans(n,1);
    for(int i=0; i<n; i++) {
        vector<int> a(10,0), b(10,0);
        while(c != ' ') {
            scanf("%c", &c);
//            printf("%d", c);
            a[c-48]++;
        }
        while(c != '\n') {
            scanf("%c", &c);
//            printf("%c", c);
            b[c-48]++;
        }
//        for(int j=0; j<10; j++) {
//            printf("a[%d] = %d || b[%d] = %d\n", j, a[j], j, b[j]);
//        }
//
//        for(int j=0; j<n; j++) {
//            printf("ans[%d] = %d\n", j, ans[j]);
//        }
        for(int j=0; j<10; j++) {
            if((a[j] > 0 && b[j] == 0) || (a[j] == 0 && b[j] > 0)) {
                ans[i] = 0;
                break;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        if(ans[i] == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
