#include<iostream>
using namespace std;

void printarray(int arr[] ,int n ){
    for(int i=0;i<n;i++){

        cout<<arr[i];
    }
}
int uniquearray(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        // cout<<arr[i];
        // cout<<ans<<endl;

    }
    return ans;
}
int main()
{

    int arr[10];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int unique= uniquearray(arr,size);
    printarray(arr,size);

   cout<<"printing answer"<<unique<<endl;  //printing of unique number



    return 0;
}