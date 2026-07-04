#include<iostream>
using namespace std;
 int fact(int n){

    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
 }

 int nCr(int n,int r){
    int num=fact(n);

    int deno=fact(r)*fact(n-r);

    return num/deno;
 }

 int main(){

    int n,r;
     cin>>n>>r;
     int ans=nCr(n,r);
     cout<<ans;

     return 0;
 }