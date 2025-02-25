#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "{Array}" << endl;
    int siz;
    int array_nums[siz] = {};
    string cls;

    cout << "Enter the size of your array: ";
    cin >> siz;

    for(int i=0;i<siz;i++){         // Input of array_nums;
        if(i == 0){
            cls = "th";
        }
        else if(i == 1){
            cls = "st";
        }
        else if(i == 2){
            cls = "nd";
        }
        else if(i == 3){
            cls = "rd"; 
        }
        else{
            cls = "th";
        }
        cout << "Enter your " << i << cls << " number: ";
        cin >> array_nums[i];
    }
    cout << "Array of nums: {";
    for(int j=0;j<siz;j++){        // Outout of array_nums;
        cout << array_nums[j] << " ";
    }
    cout << "}" << endl;
    return 0;
}