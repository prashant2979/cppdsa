#include<iostream>
using namespace std;

void update(int arr[], int n){

    //updating array
    arr[0]=120;

    cout<<"inside the function"<<endl;


    //printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;




    cout<<"going back ";

}




int main(){


    int arr[3]={1,2,3,};

    update(arr,3);
    
    //printing of array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}