#include<iostream>
using namespace std;

int fib(int n){
    int i;
    int array_fib[n] = {};
    for(i = 0; i <= n; i++){
        if(i < 2){
            array_fib[i] = i;
        }
        else if(i >= 2){
            array_fib[i] = array_fib[i-2] + array_fib[i-1];
        }
    }
    return array_fib[i - 1];
}
int main(){
    cout << "Find the fibonacci" << endl;
    int n;
    cout << "Enter the number(n): ";
    cin >> n;
    cout << "The nth fibonacci would be: " << fib(n) << endl;
    return 0;
}