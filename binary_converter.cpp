#include<iostream>
#include<string>
using namespace std;

int binary_converter(int num){ //binary_convert
    int power_ten = 1, binary_value = 0, remeinder, reference_value = num;
    while(num != 0){
        remeinder = num % 2;
        binary_value += remeinder * power_ten;
        num /= 2;
        power_ten *= 10;
    }
    return binary_value;
}
string neg_bin_converter(int num){
    int binary_value = binary_converter(num);
    string prefix = "0" + to_string(binary_value); //added the prefix of 0
    int size_prefix = size(prefix);

    for(int i = 0; i <= size_prefix; i++){ //ones complement
        if(prefix[i] == '0') prefix[i] = '1';
        else prefix[i] = '0';
    }
    if(prefix[size_prefix - 1] == '0'){ //adding 1 when the units is 0
        prefix[size_prefix - 1] = '1';
    }
    else if(prefix[size_prefix - 1] == '1'){ //adding 1 when the units is 1
        prefix[size_prefix - 2] = '1';
    } 
    return prefix;
}
int main(){
    int value, ver;
    cout << "Enter the decimal value: ";
    cin >> value;
    cout << "If the decimal value is negative value then enter(1) and if not then enter(0): ";
    cin >> ver;
    if(ver == 1){
        cout << "This is binary form your given negative integer (-" << value << "): " << neg_bin_converter(value) << endl;
    }
    else{
        cout << "This is the binary of the gven positive integer (" << value << "): " << binary_converter(value) << endl;
    }
    return 0;
}