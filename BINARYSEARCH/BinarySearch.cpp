#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    int mid = start + (end-start) / 2;

    while (start <= end) {
        

        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
         mid = start + (end-start) / 2;

    }

    return -1;
}

int main() {
    int arr[100] = {2, 4, 6, 8, 10, 12};
    int index = binarysearch(arr, 6, 20);

    cout << index << endl;

    return 0;
}
