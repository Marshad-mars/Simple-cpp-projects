#include<iostream>
#include<vector>
using namespace std;

int max_sum_finder(vector<int> array_value){

    int size_array = array_value.size();
    int current_sum, max_sum_holder = 0;;

    for(int start = 0; start < size_array; start++){
        for(int end = 0; end < size_array; end++){
            current_sum = 0;
            for(int i = start; i <= end; i++){  //sub array, digits sum finding
                current_sum += array_value[i];
            }
            if(max_sum_holder < current_sum) max_sum_holder = current_sum;
        }
    }
    for(int i = 0; i < size_array; i++){
        if(max_sum_holder < array_value[i]) max_sum_holder = array_value[i];
    }
    
    return max_sum_holder;

}
int main(){

    int size, value_holder;
    vector<int> array_value;

    cout << "Enter the extent/size of your array: ";
    cin >> size;

    cout << "Enter the values for the array-" << endl;
    for(int i = 0; i < size; i++){
        cout << "Enter the value: ";
        cin >> value_holder;

        array_value.push_back(value_holder);
    }
    cout << "Given array: { ";
    for(int i = 0; i < size; i++) cout << array_value[i] << " ";
    cout << endl;

    int max_sum = max_sum_finder(array_value);

    cout << "The max subarray sum of the given array: " << max_sum << endl;

    return 0;
}