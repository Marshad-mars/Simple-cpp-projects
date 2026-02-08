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
//algorithms used, 2 pointer approach

//this programme could also be written in vectors, such as-

// void reverser(vector<int>* array_value, int size_vector){
//     if(size_vector % 2 == 0){
//         int range = size_vector / 2, dec_value = size_vector-1;
//         for(int i = 0; i < range; i++){
//             swap((*array_value)[i], (*array_value)[dec_value]);
//             dec_value--;
//         }
//     }
//     else if(size_vector % 2 != 0){
//         int range = (size_vector-1) / 2, dec_value = size_vector-1;
//         for(int i = 0; i < range; i++){
//             swap((*array_value)[i], (*array_value)[dec_value]);
//             dec_value--;
//         }
//     }
// }
// int main(){
//     int value_holder, num_elements;
//     cout << "Please enter the number of elements: ";
//     cin >> num_elements;

//     vector<int> array_value = {};

//     for(int i = 0; i < num_elements; i++){
//         cout << "   Enter the lateral: ";
//         cin >> value_holder;
//         array_value.push_back(value_holder);
//     }
//     vector<int>* adr_vector = &array_value;
//     int size_vector = array_value.size();
//     reverser(adr_vector, size_vector);

//     cout << "The reversed format of the given array: { ";
//     for(int value : array_value){
//         cout << value << " ";
//     }
//     cout << "}" << endl;
//     return 0;
// }