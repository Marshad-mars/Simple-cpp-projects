#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout << "Homework problem-" << endl; //find the index of the smallest and the largets number printed.
    int array_nums[] = {3,2,4,5,1};
    int small_val = INT16_MAX, large_val = INT16_MIN;

    cout << "{";
    for(int i=0; i < size(array_nums); i++){
        cout << array_nums[i] << " ";
    }
    cout << "}" << endl;

    for(int a=0; a < size(array_nums); a++){
        small_val = min(array_nums[a], small_val);
    }
    int* for_sml_idx_cont = find(begin(array_nums), end(array_nums), small_val);
    int for_sml_idx2_cont = for_sml_idx_cont - begin(array_nums);
    cout << "~~~The smallest number of the array is " << small_val << " and the indicis of the value is " << for_sml_idx2_cont << endl;

    for(int b=0; b < size(array_nums); b++){
        large_val = max(array_nums[b], large_val);
    }
    int* for_lrg_idx_cont = find(begin(array_nums), end(array_nums), large_val);
    int for_lrg_idx2_cont = for_lrg_idx_cont - begin(array_nums);
    cout << "~~~The greatest number of the array is " << large_val << " and the indicis of the value is " << for_lrg_idx2_cont << endl;
    return 0;
}