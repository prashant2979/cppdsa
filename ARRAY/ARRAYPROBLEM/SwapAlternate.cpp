#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




void swapalternate(int arr[],int size){
    int temp;

    for(int i=0;i<size;i=i+2){
        {
            // /* code */swap(arr[i],arr[i+1]);
            temp=arr[1];
            arr[1]=arr[0];
            arr[0]=temp;
                
        }
        
    }
}



int main()
{
    int arr[6]={1,8,7,2,4,9};
    int oddarr[5]={15,45,89,74,23};

    swapalternate(arr,6);
    printarray(arr,6);


    return 0;
}