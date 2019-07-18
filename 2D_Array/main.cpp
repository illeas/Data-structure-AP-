#include<iostream>
using namespace std;

int main(){
    int a[2][4]; //Define 2D array
//    for(int i = 1; i <= 3; i++){
//        for(int j = 1; j <= i; j++){
//            cout << "*";
//        }
//        cout << endl;
//    }

    // input in 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }
    cout << "------------------" << endl;
    // print full 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // changing particular position in 2D array
    a[1][2] = 7;
        cout << "------------------" << endl;
    // print full 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
