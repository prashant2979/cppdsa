#include<iostream>
using namespace std;

int getmax(int num[],int n){
    
    int maxi=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,num[i]);

        // if(num[i]>max){
        //     max=num[i];
        // }
    }
    //return max value
    return maxi;


}
int getmin(int num[],int n){
    
    int mini=INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,num[i]);

        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    //return min value
    return mini;
    
}





int main()
{
    int size;
    cin>>size;
    int num[100];

    //taking the input in array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"maximum value is"<<getmax(num,size)<<endl;
    cout<<"maximum value is"<<getmin(num,size)<<endl;



}

