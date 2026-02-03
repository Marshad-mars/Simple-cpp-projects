#include<iostream>
using namespace std;

void reverse(int array[], int size){
    int counter = size -1;
    if(size % 2 != 0){
        int range_for = counter / 2;
        for(int i = 0; i < counter; i++){
            swap(array[i], array[counter]);
            counter--;
        }
    }
    else if(size % 2 == 0){
        int range_for = counter / 2;
        for(int i = 0; i < size; i++){
            swap(array[i], array[counter]);
            counter--;
        }
    }
    cout << "The reversed value of th given array: { ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "}" << endl;
}
int main(){
    int size;
    cout << "Please enter the the number of entries of your array: ";
    cin >> size;
    int array_value[size];
    for(int i = 0; i < size; i++){
        cout << "   Enter the first value: ";
        cin >> array_value[i];
    }
    cout << "\nOriginal value of the given array: { ";
    for(int i = 0; i < size; i++){
        cout << array_value[i] << " ";
    }
    cout << "}" << endl;
    reverse(array_value, size);
    return 0;
}
//this programme could be only used for reversing an array of numbers or any values