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
int product(int value){
    int length = size(to_string(value)), product_value = 0, div = pow(10, length);
    for(int i = length; i >= 1; i--){
        product_value += int(value) / div;
        value = value % div;
        div /= 10; 
    }
    product_value *= value;
    return product_value;
}
float division(int value){
    int length = size(to_string(value)), division_value = 0, div = pow(10, length);
    for(int i = length; i >= 1; i--){
        division_value /= int(value) / div;
        value = value % div;
        div /= 10; 
    }
    division_value += value;
    return division_value;
}
int subtract(int value){
    int length = size(to_string(value)), subtract_value = 0, div = pow(10, length);
    for(int i = length; i >= 1; i--){
        subtract_value -= int(value) / div;
        value = value % div;
        div /= 10; 
    }
    subtract_value += value;
    return subtract_value;
}
int main(){
    cout << "Arithmatic operational performer on digits of a number." << endl;
    int chos, num;
    cout << "select you choice among these operations: \n~Multiplication(1) \n~Division(2) \n~Addition(3) \n~Subtraction(4)" << endl;
    cout << "Please enter your preference: ";
    cin >> chos;
    cout << "Enter the number: ";
    cin >> num;

    if(chos == 1){
        cout << "\n The product of all the digits of the-" << num << " is: " << product(num) << endl;
    } if(chos == 2){
        cout << " The divsion of all the digits of the-" << num << " is: " << division(num) << endl;
    } if(chos == 3){
        cout << "The sum of all the digits of the-" << num << " is: " << sum(num) << endl;
    } if(chos == 4){
        cout << "The subtraction of all the digits of the-" << num << " is: " << subtract(num) << endl; 
    }
    return 0;
}