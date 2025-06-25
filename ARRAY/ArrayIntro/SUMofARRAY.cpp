#include<iostream>
using namespace std;

int sumarray(int arr[],int n ){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    
    }
    return sum;
}





int main()
{
    int arr[100];
    int size;
    cin>>size;
    int sum=0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        // sum=sum+arr[i];
        // sum++;1
    }
    // cout<<"sum of array"<<sum<<endl;



    cout<<"find sum of array"<<endl;
    cout<<sumarray(arr,size)<<endl;








    return 0;
}