#include<iostream>
using namespace std;
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int bubblesort(int arr[],int n){

    for(int i=1;i<n;i++){

        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }

}
int main()
{

    int arr[10]={56, 12 ,89, 45, 34, 0 ,73 ,21, 90, 18};

    bubblesort(arr,10);
    printarray(arr,10);

    
    return 0;
}