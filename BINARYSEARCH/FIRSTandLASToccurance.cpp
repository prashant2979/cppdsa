#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;

    int mid = start + (end-start) / 2;

    while (start <= end) {
        

        if (arr[mid] == key) {
            ans= mid;
           end=mid-1;

        }

        else if (key > arr[mid]) { 
            start = mid + 1;
        } else {
            end = mid - 1;
        }
         mid = start + (end-start) / 2;

    }
    return ans;
}

int LASToccurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid = start + (end-start) / 2;

    while (start <= end) {
        

        if (arr[mid] == key) {
            ans= mid;
            start=mid+1;
        }

        else if (key > arr[mid]) { 
            start = mid + 1;
        } else {
            end = mid - 1;
        }
         mid = start + (end-start) / 2;

    }
    return ans;
}


int main()
{
    int arr[11]={1,2,3,3,3,3,3,3,3,3,5};

    cout<<"first occurence at index "<<firstoccurence(arr,11,2)<<endl;
    cout<<"last occurance at index "<<LASToccurance(arr,11,3)<<endl;
    cout<<"totat no occurance"<<LASToccurance(arr,11,3)-firstoccurence(arr,11,3) + 1
<<endl;
    return 0;
}