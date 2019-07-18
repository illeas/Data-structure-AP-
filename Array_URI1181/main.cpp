#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int L;
    double M[12][12];
    double sum, res;
    char C;
    cin >> L;
    cin >> C;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    sum = 0.0;
    if(C == 'S'){
        for(int j = 0; j < 12; j++){
            sum += M[L][j];
        }
        cout << fixed;
        cout << setprecision(1);
        cout << sum << endl;
    }
    else if(C == 'M'){
        for(int j = 0; j < 12; j++){
            sum += M[L][j];
        }
        res = sum/12.0;
        cout << fixed;
        cout << setprecision(1);
        cout << res << endl;
    }
    return 0;
}
