#include<iostream>
using namespace std;

int main(){
    int height;
    cout << "Enter the height of your pattern: ";
    cin >> height;

    int value = 1;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height; j++){
            if(i > 1){
                for(int a = 1; a < i; a++){
                    cout << " " << " ";
                }
                cout << value << " ";
            }
        }
        cout << endl;
        value++;
    }
    cout << "Marshad's_Matrix" << endl;
}
//newly discovered pattern