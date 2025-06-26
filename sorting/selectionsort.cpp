#include <iostream>
using namespace std;
int printarray(int arr[],int n){
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
int selectionsort(int arr[], int n)
{
    int minindex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        swap(arr[minindex], arr[i]);
    }
}
    int main()
    {

        int arr[8] = {2, 4, 8, 1, 22, 14, 54, 0};
         selectionsort(arr, 8) ;
        printarray(arr,8);

        return 0;
    }