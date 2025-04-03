#include<iostream>
#include<string>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
int sumPrime(int n){
    int sum_val = 0, i;
    for(i = 1; i <= n; i++){
        if(isPrime(i) == 1){
            sum_val += i;
        }
    }
    return sum_val;
}
int main(){
    cout << "Find whether a number is prime or not or find the sum of all the primes between 1 to n" << endl;
    cout << "  " << endl;
    cout << "~~~For checking whether a number is prime or not? Enter: (ip)" << endl;
    cout << "~~~For finding the sum of all the prime numbers from 1 to n. Enter: (sp)" << endl;
    cout << "   " << endl;
    long long int num;
    int i = 0;
    string chos;

    cout << "Enter choise: ";
    cin >> chos;
    cout << "Enter the number: ";
    cin >> num;
    while(true){
        if(num <= 1){
            cout << "Enter a value which is greater then 1." << endl;
            cout << "Enter the number: ";
            cin >> num;
        }
        else if(num > 1) break;
        i++;
    }
    if(chos == "ip"){
        cout << num << " is a " << isPrime(num) << endl;
    }
    else if(chos == "sp"){
        cout << "Sum of all the prime numbers from 1 to " << num << " is " << sumPrime(num) << endl;
    }
    return 0;
}