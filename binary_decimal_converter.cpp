#include<iostream>
#include<string>
#include<cmath>
#include<thread>
#include<chrono>
using namespace std;

void countdown(){
    cout << "       processing";
    for(int i = 1; i <= 3; i++){
        this_thread::sleep_for(chrono::seconds(1));
        cout << "*" << flush;
    }
    cout << endl;
}
int binary_converter(int num){ //main converter from decimal to binary
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
        prefix[size_prefix - 1] = '0';
        prefix[size_prefix - 2] = '1';
    } 
    return prefix;
}
int decimal_converter(int num){  //main converter from binary to decimal
    int dec_value = 0, quotiont, remeinder, power_two;
    string loop_range = to_string(num);

    for(int i = 0; i < size(loop_range); i++){
        power_two = pow(2, i);
        remeinder = num % 10;
        dec_value += remeinder * power_two;
        num /= 10;
    }
    return dec_value;
}
int neg_dec_converter(int value){
    string prefix = to_string(value); //string form of the binary value
    int size_prefix = size(prefix);

    for(int i = 0; i < size_prefix; i++){ //ones complement
        if(prefix[i] == '1') prefix[i] = '0';
        else if(prefix[i] == '0') prefix[i] = '1';
    }
    if(prefix[size_prefix - 1] == '0'){ //adding 1 when the units is 0
        prefix[size_prefix - 1] = '1';
    }
    else if(prefix[size_prefix - 1] == '1'){ //adding 1 when the units is 1
        prefix[size_prefix - 1] = '0';
        prefix[size_prefix - 2] = '1';
    }
    int binary_value = stoi(prefix);
    return decimal_converter(binary_value);
}
int main(){
    char chos;
    cout << "You have two alternatives: \n    ~Decimal to Binary conversion(A) \n    ~Binary to Decimal conversion(B)" << endl;
    cout << "Choose your alternative with respect to the given character: ";
    cin >> chos;
    if(chos == 'A'){ //decimal to binary conversion
        int value, ver;
        cout << "Enter the decimal value: ";
        cin >> value;
        cout << "If the decimal value is negative value then enter(1) and if not then enter(0): ";
        cin >> ver;
        while(ver != 1 && ver != 0){
            cout << "Please enter a value within the range of the given values 1 and 0: ";
            cin >> ver;
            if(ver == 1 || ver == 0) break;
        }
        if(ver == 1){ //for negative values
            countdown();
            cout << "This is binary form your given negative integer (-" << value << "): " << neg_bin_converter(value) << endl;
        }
        else if(ver == 0){ //for positive values
            countdown();
            cout << "This is the binary of the gven positive integer (" << value << "): " << binary_converter(value) << endl;
        }
    }
    else if(chos == 'B'){ //binary to decimal conversion
        int value, ver;
        cout << "Please enter the binary value: ";
        cin >> value;
        cout << "If the given binary value is negative based then enter-(1) otherwise enter-(0): ";
        cin >> ver;
        while(ver != 1 && ver != 0){
            cout << "Please enter a value within the given range of values, 1 and 0: ";
            cin >> ver;
            if(ver == 1 || ver == 0) break;
        }
        if(ver == 1){ //for negative values
            countdown();
            cout << "The negative_decimal form of the given negative_binary number: -" << neg_dec_converter(value) << endl;
        }
        else if(ver == 0){ //for positive values
            countdown();
            cout << "The decimal form of the given binary number: " << decimal_converter(value) << endl;
        }
    }
    return 0;
}