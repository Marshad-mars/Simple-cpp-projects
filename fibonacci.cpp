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
//     There is also a different method of finding the fibonacci of a certain value. Its by the "incrimentation of previous,most previous and current value"
// int fib(int n){
//     int most_previous, previous, current;
//     for(int i = 0; i+1 <= n; i++){
//         if(i < 2){
//             most_previous = 0;
//             if(i == 1) previous++;
//             current = most_previous + previous;
//         }
//         else{
//             most_previous = previous;
//             previous = current;
//             current = most_previous + previous;
//         }
//     }
//     return current;
// }
// int main(){
//     int range;
//     cout << "Enter the number: ";
//     cin >> range;
//     cout << "This is the fibonacii to the given number range: " << fib(range) << endl;
//     return 0;
// }