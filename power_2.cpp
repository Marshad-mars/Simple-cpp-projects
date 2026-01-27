#include<iostream>
using namespace std;

bool finder(int value){
    int remeinder = 0, divident = value;
    while(divident != 1){
        remeinder += divident % 2;
        divident /= 2;
    }
    if(remeinder == 0) return true;
    else return false;
}
int main(){
    int value;
    cout << "Eneter any integer: ";
    cin >> value;
    if(finder(value) == 1) cout << "The given value is the power of 2" << endl;
    else cout << "The given value is not a power of 2" << endl;
    return 0;
}
//but this problem could also be solved by the help of bitwise operation. There if the binary form of the given value is composed 
//   only one 1 and rest all the bits are 0, then the given number would be considered a valuhe which is power of 2.