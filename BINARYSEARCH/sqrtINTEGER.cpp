#include<iostream>
using namespace std;

   long long int binarsearch(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){
           long long int saqure=mid*mid;
            if(saqure==n){
                return mid;
            }
            else if(saqure<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
double moreprecision (int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j = ans;j*j<n;j=j+factor){
            ans=j;

        }

    }
    return ans;
}    
int main()
{
    int n;
    cout<<"enter your is number is "<<endl;
    cin>>n;

    int tempsol=binarsearch(n);
    return 0;
}