#include<iostream>
using namespace std;


bool linersearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }

    }
    return 0;

}



int main(){

    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    cout<<"enter the key"<<endl;
    int key;
    cin>>key;

     //wheather 1 is present in it or not


    bool found=linersearch(arr,10,key);

    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }



}