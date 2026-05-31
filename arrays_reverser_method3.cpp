#include<iostream>
using namespace std;

void value_reverser(int array_value[], int size_array){
    int left_places, right_places;
        int right_digit_index = (size_array-1);

        for(int i = 0; i < (size_array/2); i++){
            left_places = array_value[i];
            array_value[i] = array_value[right_digit_index];
            array_value[right_digit_index] = left_places;
            right_digit_index--;
        }
}
int main(){

    int size_array;
    cout << "Enter the size of your Array: ";
    cin >> size_array;

    int array_value[size_array];

    for(int i = 0; i < size_array; i++){
        cout << "Enter value: ";
        cin >> array_value[i];
    }

    cout << "Array before reversed: { ";
    for(int i = 0; i < size_array; i++) cout << array_value[i] << " ";
    cout << "}" << endl;

    value_reverser(array_value, size_array);

    cout << "Array after reversed: { ";
    for(int i = 0; i < size_array; i++) cout << array_value[i] << " ";
    cout << "}" << endl;

    return 0;
}