#include<iostream>
using namespace std;

bool even_checker(int value){
    if(value % 2 == 0) return true;
    else return false;
}
int main(){

    unsigned int value;

    cout << "Enter the value for the power_2 check: ";
    cin >> value;

    int even_check = even_checker(value);
    int count_check;

    cout << endl;
    if(even_check != true){
        while(even_check != 1){
            cout << "Please enter a value which is even in nature: ";
            cin >> value;

            even_check = even_checker(value);
        }
    }
    while(value != 1){
        value /= 2;

        if(value > 1 && value % 2 == 0){
            count_check = 1;
        }
        else if(value > 1 && value % 2 != 0){
            count_check = 0;
            break;
        }
    }
    if(count_check == 1) cout << "The given value is a power of 2" << endl;
    else cout << "The given value is not a power of 2" << endl;
    
    return 0;
}
//manual checking by the process of continuous division and mod check 