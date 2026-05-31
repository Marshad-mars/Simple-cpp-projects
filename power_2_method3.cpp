#include<iostream>
using namespace std;

int binary_converter(int value){
    int clone_value = value;
    int binary_value = 0;
    int power_ten = 1;
    int digit_holder;

    while(clone_value != 0){
        digit_holder = clone_value % 2;
        binary_value += digit_holder * power_ten;
        clone_value /= 2;
        power_ten *= 10;
    }
    return binary_value;
}
int appearing_ones(int value){
    int clone_value = value, binary_holder, digit_holder;
    int one_count = 0;

    while(clone_value != 0){
        binary_holder = binary_converter(clone_value);

        if(binary_holder % 10 == 1) one_count++;
        clone_value >>= 1;  //right shifting operation
    }
    return one_count;
}
int main(){
    int value;

    cout << "Enter the decimal form of the given value: ";
    cin >> value;

    int one_counts = appearing_ones(value);

    if(one_counts == 1) cout << "~~~~~(" << true << "), power of 2" << endl;
    else cout << "~~~~~(" << false << "), not a power of 2" << endl;

    return 0;
}
//method3, checking by the help of right shfiting operation 