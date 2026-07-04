#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"Enter the amount:"<<endl;
    cin>>money;

    cout<<"Enter note:";

    int Rnote;

    cin>>Rnote;
    int ans;
    switch(Rnote){
        case 100 : ans=money/100;
                   cout<<ans;
                   break;
        case 20 : ans=money/20;
                   cout<<ans;
                   break;
        case 10 : ans=money/10;
                   cout<<ans;
                   break;
        default : cout<<"amount is too small";
    }
}