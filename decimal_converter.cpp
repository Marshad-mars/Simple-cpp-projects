#include<iostream>
#include<cmath>
using namespace std;

int decimel_converter(int binary_value){
    int dec_value = 0, quotiont, remeinder, power_two;
    string loop_range = to_string(binary_value);

    for(int i = 0; i < size(loop_range); i++){
        power_two = pow(2, i);
        remeinder = binary_value % 10;
        dec_value += remeinder * power_two;
        binary_value /= 10;
    }
    return dec_value;
}
int main(){
    int value;
    cout << "Enter the binary value you want to convert: ";
    cin >> value;

    cout << "This is the decimal format of the given binary format: \n" << decimel_converter(value) << endl;
    return 0;
}