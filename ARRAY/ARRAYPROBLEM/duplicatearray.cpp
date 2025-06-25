#include<iostream>
using namespace std;


int  duplicatearray(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;

    
}












int main()
{
    int arr[10];
    int size;
    cin>>size;

    //input for array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int dup=duplicatearray(arr,size);
    cout<<dup<<endl;

    return 0;
}