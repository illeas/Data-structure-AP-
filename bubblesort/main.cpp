#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int tmp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " "; //printing single elements
    cout << endl; //printing newline
}

int main(){
    int arr[] = {21, 31, 45, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before sorting: ";
    printArray(arr,n);
    bubbleSort(arr,n);
    cout << "After sorting: ";
    printArray(arr,n);
    return 0;
}
