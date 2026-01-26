#include<iostream>
#include<string>
using namespace std;

int power_ten(int value){
    int ten = 1;
    for(int i = 1; i <= value; i++){
        ten *= 10;
    }
    return ten;
}
int reverser(int value){
    int holder = value, remeinder, reversed_value = 0;
    int str_holder = holder;
    string length = to_string(str_holder);
    int numeric_length = size(length);
    int power_ten_value = power_ten(numeric_length-1);

    for(int i = 1; holder > 0; i++){
        remeinder = holder % 10;
        reversed_value += remeinder * power_ten_value;
        holder /= 10;
        str_holder = holder;
        length = to_string(str_holder);
        numeric_length = size(length);
        power_ten_value = power_ten(numeric_length-1);
    }
    return reversed_value;
}
int main(){
    int value;
    cout << "Entet the value you want to reverse: ";
    cin >> value;
    cout << "The reverse of the given value " << value << " is: " << reverser(value) << endl;
    return 0;
}