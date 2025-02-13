#include<iostream>
using namespace std;

int main() {
    //custom problem solve-
    cout << "Find the any type of sum-" << endl;
    char chos;
    int range;
    int sum = 0;

    cout << "*For the sum of all even.no form 1 to n~ enter (a)." << "\n" <<
            "*For the sum of all odd.no form 1 to n~ enter (b)." << "\n" <<
            "*For the sum of all numbers from 1 to n~ enter any key you want(expect a or b)." << endl;
    cout << "Enter you choise:";
    cin >> chos;
    cout << "   " << endl; 
    if(chos == 'a'){  //sum of all the even numbers.
        cout << "Enter the range of sum: ";
        cin >> range;
        for(int i=0; i <= range; i++){ 
            if(i % 2 == 0){
                sum = sum + i;
            }
        }
        cout << "The sum of all the EVEN numbers from 1 to " << range << " is " << sum << endl;
    }
    else if(chos == 'b'){  //sum of all the odd numbers
        cout << "Enter the range of sum: ";
        cin >> range;
        for(int i=0; i <= range; i++){
            if(i % 2 != 0){
                sum = sum + i;
            }
        }
        cout << "The sum of all the ODD numbers from 1 to " << range << " is " << sum << endl;
    }
    else{
        cout << "Enter the range of sum: ";
        cin >> range;
        for(int i=0; i <= range; i++){
            sum = sum + i;
        }
        cout << "The sum of all the numbers from 1 to " << range << " is " << sum << endl;
    }
    return 0;
};