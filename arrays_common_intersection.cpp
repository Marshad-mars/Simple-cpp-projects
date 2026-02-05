#include<iostream>
using namespace std;

void common_finder(int array_1[], int array_2[], int size_1, int size_2, int common_array[]){
    int for_index = 0;
    for(int i = 0; i < size_1; i++){
        for(int a = 0; a < size_2; a++){
            if(array_1[i] == array_2[a]){
                common_array[for_index] = array_1[i]; 
                for_index++;
            }
            else{
                common_array[i] = 0;
            }
        }
    }
}
int main(){
    int size_1, size_2;
    cout << "Please enter the size of the first array: ";
    cin >> size_1;
    int array_1[size_1];
    for(int i = 0; i < size_1; i++){
        cout << "   Enter the lateral: ";
        cin >> array_1[i];
    }
    cout << "Please enter the size of the second array: ";
    cin >> size_2;
    int array_2[size_2];
    for(int i = 0; i < size_2; i++){
        cout << "   Enter the lateral: ";
        cin >> array_2[i];
    }
    int common_array[size_1];
    int* adr_array_1 = array_1;
    int* adr_array_2 = array_2;
    int* adr_common_array = common_array;
    common_finder(adr_array_1, adr_array_2, size_1, size_2, adr_common_array);

    int size_common_array = sizeof(common_array) / 4;
    if(size_common_array == 1){
        cout << "No common intersection values" << endl;
    }
    else{
        cout << "The common intersection between the 2 given arrays is: { ";
        for(int i = 0; i < size_common_array; i++){
            cout << common_array[i] << " ";
        }
        cout << "}" << endl;
    }
    cout << "\n   *The 0s indicates no further common values*" << endl;
    return 0;
}
//this programme is could be used for finding commonly intersecting values between 2 arrays.