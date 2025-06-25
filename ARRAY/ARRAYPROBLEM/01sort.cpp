#include<iostream>
using namespace std;





int printarray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
}
void sorttarry(int arr1[],int n){
    int left=0;
    int right=n-1;
    while (left<right)
    {
        while (arr1[left]== 0 && left < right);{
           left++;
        }
        while(arr1[right]== 1 && left <right ){
            right--;
        }
        if( left<right)
        {
            swap(arr1[left],arr1[right]);
            left++;
            right--;
        }
        
    }
    

}
int main()
{

    int arr1[8]={0,0,1,0,0,1,0};

    printarray(arr1,8);
    sorttarry(arr1,8);
    return 0;
}