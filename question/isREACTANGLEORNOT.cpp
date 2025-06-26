#include<iostream>
using namespace std;

int reactangle(int a,int b,int c,int d)
{
    if(a==b && c==d)
    if(a==d && b==c)
    cout<<"yes"<<" ";
    
  
}



int main(){

    int a,b,c,d;
    cout<<"enter your value";
    cin>>a>>b>>c>>d;
    cout<<reactangle(a,b,c,d)<<endl;

    return 0;
}