#include<iostream>
using namespace std;

int target_occurence_counter(int array_value[], int target, int size_array){
    int target_count = 0;
    
    for(int i = 0; i < size_array; i++){
        if(array_value[i] == target) target_count++;
    }
    return target_count;
}
void target_value_finder(int array_value[], int target, int size_array, int target_count, int target_indexes[]){
    int target_index = 0;

    for(int i = 0; i < size_array; i++){
        if(array_value[i] == target){
            target_indexes[target_index] = i;
            target_index++;
        }
    }
}
int main(){

    int array_value[7] = {4,2,7,8,1,2,5}, target;
    
    cout << "Given arra_value: { ";
    for(int i = 0; i < 7; i++){
        cout << array_value[i] << " ";
    }
    cout << "}" << endl;

    cout << "Enter the target: ";
    cin >> target;
    cout << endl;

    int target_count = target_occurence_counter(array_value, target, 7);
    
    if(target_count == 0){
        while(target_count == 0){
            cout << "Please enter such a value which comes in the given array, as the target: ";
            cin >> target;
            target_count = target_occurence_counter(array_value, target, 7);
        }
    }
    int target_indexes[target_count];
    target_value_finder(array_value, target, 7, target_count, target_indexes);

    cout << "The index of the target value " << target << " on the main array is: ";
    for(int i = 0; i < target_count; i++){
        cout << target_indexes[i] << " ";
    }
    cout << endl;
    
    return 0;
}