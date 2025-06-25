#include<iostream>
using namespace std;

int intersection(int arr1[],int n,int arrb[],int i,int j){
    int ans=0;
    for(int i=0;i<n;i++){

        cin>>arr1[i];

        for(int j=0;j<n;j++){

        cin>>arrb[j];
    }

    if(arr1[i]==arrb[j]){
        ans=arr1[i];
        i++;
        j++;
    }
    else if(arr1[i]<arrb[j]){
        i++;
    }
    else if(arr1[i]>arrb[j]){
        j++;
    }
    }
    
    return ans;
}
int main()
{

    int arr1[100];
    int arrb[100];
     int size;
    cin>>size;

   int inttt= intersection(arr1,arrb,size);
    
}