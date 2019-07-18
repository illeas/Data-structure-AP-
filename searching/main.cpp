#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " "; //printing single elements
    cout << endl; //printing newline
}

int main(){
    int arr[] = {21, 31, 45, 10, 15}; /* initializing an integer array */
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << "Index: " << i << endl;
            found = true;
        }
    }
    if(found == false)
        cout << "Not found!" << endl;
    return 0;
}
