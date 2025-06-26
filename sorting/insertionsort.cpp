#include <iostream>
using namespace std;

int insertionsort(int arr[], int n)
{

    int i = 1;
    while (i < n)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
        i = i + 1;
    }
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, 5);

    // Print sorted array
    int k = 0;
    while (k < n)
    {
        cout << arr[k] << " ";
        k = k + 1;
    }

    return 0;
}



