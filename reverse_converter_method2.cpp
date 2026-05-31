#include<iostream>
using namespace std;

int length_finder(int value){
    int counts = 0;

    while(value != 0){
        counts++;
        value /= 10;
    }
    return counts;
}
int power_ten_finder(int range){
    int power_ten = 1;

    for(int i = 1; i < range; i++) power_ten*= 10;

    return power_ten;
}
int reverse_ordering(int value){
    int digit_holder;
    int value_length = length_finder(value);
    int reversed_form = 0;
    int power_ten = power_ten_finder(value_length);

    while(value != 0){
        digit_holder = value % 10;
        reversed_form += digit_holder * power_ten;
        value /= 10;
        power_ten /= 10;
    } 
    return reversed_form;
}
int main(){

    int value;
    cout << "Enter the value for the reverse order: ";
    cin >> value;

    cout << "\nThe reverse order of " << value << " is: " << reverse_ordering(value) << endl;

    return 0;
}
//method2, no usage of strings for the conversion, direct manual mathematical way