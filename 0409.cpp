#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     
    int n;
    double sum = 0.0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i > 0){
            sum += (a[i-1] + a[i])/2.0;
        }
    }
    cout<<setprecision(10)<<sum/(n-1);
    return 0;
}