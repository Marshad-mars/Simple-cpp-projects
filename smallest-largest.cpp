#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "Find the smallest or the largest number in an array~" << endl;
    int siz, size_array;
    int array_nums[size_array] = {};
    int chos;

    cout << "Enter the size of your array: ";
    cin >> siz;
    size_array = siz;  //indirectly giving a size of the array_nums.

    cout << "Enter your array: ";
    for(int i=0; i < siz ;i++){
        cin >> array_nums[i];
    }
    cout << "Array of nums: {";
    for(int j=0;j<siz;j++){
        cout << array_nums[j] << " ";
    }
    cout << "}" << endl;

    int small_val = array_nums[0], large_val = array_nums[0];
    
    for(int a=0; a < siz; a++){       
        if(array_nums[a] < small_val){
            small_val = array_nums[a];
        }else if(array_nums[a] > large_val){
            large_val = array_nums[a];
        }      
    }
    cout << "~~~The smallest number is " << small_val << endl;
    cout << "~~~The largest number is " << large_val << endl;
    return 0;
};