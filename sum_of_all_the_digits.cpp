#include<iostream>
#include<cmath>
using namespace std;

int sum(int value){
    int length = size(to_string(value)), sum_value = 0, div = pow(10, length);
    for(int i = length; i >= 1; i--){
        sum_value += int(value) / div;
        value = value % div;
        div /= 10; 
    }
    sum_value += value;
    return sum_value;
}
int main(){
    cout << "Sum of all the digits" << endl;
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Sum of all the digits of " << num << " is: " << sum(num) << endl;
    return 0;
}