#include<iostream>
using namespace std;

int max_finder(int array[], int size){
    int container = array[0];
    for(int i = 1; i <= size-1; i++){
        if(array[i] > container){
            container = array[i];
        }
    }
    return container;
}
int min_finder(int array[], int size){
    int container = array[0];
    for(int i = 1; i <= size-1; i++){
        if(array[i] < container){
            container = array[i];
        }
    }
    return container;
}
void reverser(int array_nums[], int size){
    int max_value = max_finder(array_nums, size);
    int min_value = min_finder(array_nums, size);
    int max_index, min_index;

    for(int i = 0; i < size; i++){
        if(array_nums[i] == max_value){
            max_index = i;
        }
        if(array_nums[i] == min_value){
            min_index = i;
        }
    }
    for(int i = 0; i < size; i++){
        if(max_index > min_index){
            swap(array_nums[min_index], array_nums[max_index]);
        }
        else if(max_index < min_index){
            swap(array_nums[max_index], array_nums[min_index]);
        }
    }
}
int main(){
    int size;
    cout << "Please enter the total number of entries: ";
    cin >> size;
    int array_nums[size];
    for(int i = 0; i < size; i++){
        cout << "  Enter the lateral: ";
        cin >> array_nums[i];
    }
    int max_value = max_finder(array_nums, size);
    int min_value = min_finder(array_nums, size);
    cout << "The given array is: { ";
    for(int i = 0; i < size; i++){
        cout << array_nums[i] << " ";
    }
    cout << "}" << endl;
    int max_index, min_index;
    for(int i = 0; i < size; i++){
        if(array_nums[i] == max_value){
            max_index = i;
        }
        if(array_nums[i] == min_value){
            min_index = i;
        }
    }
    cout << "   The max value of the given array of nums: " << max_value << "; and the indicis of the value is: " << max_index << endl;
    cout << "   The min value of the given array of nums: " << min_value << "; and the indicis of the value is: " << min_index << endl;
    
    int* address_value = array_nums;
    reverser(address_value, size);
    
    cout << "The swaped array between thr max and min value of the given array: { ";
    for(int i = 0; i < size; i++){
        cout << array_nums[i] << " ";
    }
    cout << "}" << endl;
    return 0;
}
//this programme is used for swapping the places of max_value and the min_value.