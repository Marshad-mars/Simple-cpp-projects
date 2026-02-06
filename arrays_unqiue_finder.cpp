#include<iostream>
using namespace std;

void unique_finder(int array_value[], int size, int unique_array[], int* unique_size){
    int counter = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(array_value[i] == array_value[j]){
                counter++;
            }
        }
        if(counter == 1){
            *unique_size += 1;
            unique_array[*unique_size-1] = array_value[i];
            counter = 0;
        }
        else counter = 0;
    }
}
int main(){
    int size;
    cout << "Please enter the number of entries: ";
    cin >> size;
    int array_value[size];
    for(int i = 0; i < size; i++){
        cout << "   Enter the value_" << i << ": ";
        cin >> array_value[i];
    }
    cout << "The given array is: { ";
    for(int i = 0; i < size; i++){
        cout << array_value[i] << " ";
    }
    cout << "}" << endl;
    
    int unique_size = 0;
    int unique_array[unique_size];
    int* adr_array = array_value;
    int* adr_unique = unique_array;

    unique_finder(adr_array, size, adr_unique, &unique_size);
    if(unique_size > 0){
        cout << "~~~~~The set of unique values from the given array is: { ";
        for(int i = 0; i < unique_size; i++){
            cout << unique_array[i] << " ";
        }
        cout << "}" << endl;
    }
    else{
        cout << "~~~~~The given array does not contains any unique value." << endl;
    }
    return 0;
}
//this programme could be used for finding the unique values in an array.
//(algorithms) used: Linear Search.