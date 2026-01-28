#include<iostream>
using namespace std;

int main(){
    int size;  // size of the array
    cout << "Enter thge size of the array: ";
    cin >> size;
    int array_value[size];

    cout << "Please enter 4 different values which are positive in nature-" << endl;
    for(int i= 0; i < size; i++){
        cout << "Enter the current value: ";
        cin >> array_value[i];
    }
    int counter_1 = array_value[0];  //the variable which holds the largest value of the array
    for(int j = 1; j < size; j++){
        if(counter_1 < array_value[j]){
            counter_1 = array_value[j];
        }
    }
    cout << "The largest value of given array of number is: " << counter_1 << endl;
    int counter_2 = array_value[0];  //the variable which holds the smallest value of the array
    for(int j = 1; j < size; j++){
        if(counter_2 > array_value[j]){
            counter_2 = array_value[j];
        }
    }
    cout << "The smallest value of the given array of number is: " << counter_2 << endl;
    return 0;
}