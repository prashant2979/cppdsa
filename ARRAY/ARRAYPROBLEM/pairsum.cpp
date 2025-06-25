#include <iostream>
using namespace std;
int getMin(int a, int b, int c) {
    return min(a, min(b, c));
}

int getMax(int a, int b, int c) {
    return max(a, max(b, c));
}
void pairSum(int arr1[], int arr2[], int arr3[],int size1, int size2, int size3,int target) {
    cout << "\nPairs with sum " << target << ":\n";
    bool found = false;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            for(int k=0; k< size3; k++){
                if (arr1[i] + arr2[j] + arr3[k] == target) {
                int a = arr1[i];
                    int b = arr2[j];
                    int c = arr3[k];

                    // Sort and print the triplet
                    int smallest = getMin(a, b, c);
                    int largest = getMax(a, b, c);
                    int middle = a + b + c - smallest - largest;

                    cout << "(" << smallest << ", " << middle << ", " << largest << ")\n";
            }
            }
            
        }
    }

    if (!found) {
        cout << "No such pairs found.\n";
    }
}

int main() {
    int arr1[100], arr2[100] , arr3[100];
    int size1, size2, target, size3;

    // Get user input
    cout << "Enter size of first array: ";
    cin >> size1;
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    cout<<"enter size of the third array: ";
    cin>>size3;
    for(int i=0;i<size3;i++){
        cin>>arr3[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    // Call function
    pairSum(arr1, arr2,arr3, size1, size2,size3, target);

    return 0;
}
