#include<iostream>
using namespace std;

int main(){



    int num;
    cout<<"enter your nmber";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){   ///decimal to binary//
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;

    }
    cout<<ans<<endl;


    








}