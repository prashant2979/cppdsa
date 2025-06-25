#include<iostream>
using namespace std;


/// with help of function//
void printarrray(int arr[] ,int size){

    // cout<<"printing start "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
    // cout<<"printing array is done"<<"   "<<endl;





}
int main(){

    int number[10];   //intialization of array//


    //accessing array//
    // cout<<"value of 1 index"<<number[1]<<endl;




    // cout<<"value of 21 index"<<number[21]<<endl;

    int second[3]={1,2,3};
    //accessing array//


    // cout<<"acceesing value of array" <<endl<< second[2]<<endl;

    int third[15]={3,7};

    int n=3;
    // printarrray(third,3);
    // cout<<"printing the array"<<endl;





    //intilization with help of zero
    int fourth[10]={1};
    n=10;

    // printarrray(fourth,10);

    //printing the array
    for(int i=0;i<n;i++){
        // cout<<fourth[i]<<endl;
    }





    //intialization with all zero//
    int fivth[10]={0};
    int nn=10;
    for(int i=0;i<nn;i++){
        // cout<<fivth[i]<<" ";
    }


    int fivthsize=sizeof(fivth)/sizeof(int);
    // cout<<"size of fivth is"<<fivthsize<<endl;





    // cout<<endl<<"every thing fine"<<endl<<endl;




    char ch[5]={'a','b','c','d','e'};
    cout<<ch[2]<<endl;


    //printing array
    for(int i=0;i<6;i++){
        cout<<ch[i]<<" "<<endl;

    }
    cout<<"printing is done"<<endl;
}