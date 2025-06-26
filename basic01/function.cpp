#include<iostream>
using namespace std;




// int sum (int a,int b){
//     int ans=a+b; // dunction declear//
//     return ans;
// }
// int main(){
//     int m,n;  //function define//
//     cin>>m>>n;
//     cout<<sum(m,n)<<" ";
// }


// bool prime(int n){
//     if(n<2);
//     return 0;


//     for(int i=0;i<n;i++)
//     {
//         if(n%i==0)
//         return 0;
//     }
//     return 1;
// }

// int main(){
// //     int a,b;
// //     cout<<"enter your number";
// //     cin>>a>>b;
// //     cout<<prime(a);







// }

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int num=factorial(n);

    int demon=factorial(r) * factorial(n-r);

    int ans=num/demon;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is "<< nCr(n,r)<<endl;




    return 0;
}