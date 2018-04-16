#include<iostream> 
using namespace std; 
int main(){ 
int n,m,l; 
cin>>n>>m>>l; 
if(n==0&&m==0&&l==0){ 
cout<<0; 
return 0; 
} 
if(n!=0)cout<<n; 
 
 
if(n!=0&&m>0)cout<<"+"; 
if(m==0)cout<<""; 
else if(m==1)cout<<'x'; 
else if(m==-1)cout<<"-x"; 
else cout<<m<<'x'; 
 
if((n!=0||m!=0)&&l>0)cout<<"+"; 
 
if(l==0)cout<<""; 
else if(l==1)cout<<'y'; 
else if(l==-1)cout<<"-y"; 
else cout<<l<<'y'; 
 
}