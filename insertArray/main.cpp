#include<iostream>
using namespace std;

int insertArray(int arr[], int capacity, int n, int key){
    if(n >= capacity){
        cout << "Not possible" << endl;
        return n;
    }
    else {
        arr[n] = key;
        return n+1;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " "; //printing single elements
    cout << endl; //printing newline
}

int main(){
    int arr[20] = {21, 31, 45, 10, 15}; /* initializing an integer array */
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int key = 89;
    cout << "Before insert: ";
    printArray(arr,n);
    n = insertArray(arr,capacity,n,key);
    cout << "After insert: ";
    printArray(arr,n);
    n = insertArray(arr,capacity,n,300);
    cout << "After second insert: ";
    printArray(arr,n);
    return 0;
}
