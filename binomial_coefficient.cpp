#include<iostream>
using namespace std;

int factorial(int value){
    int fact_value = 1;
    for(int i = value; i >= 1; i--){
        fact_value *= i;
    }
    return fact_value;
}
int bin(int n, int r){
    int sub = n-r;
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int sub_fact = factorial(sub);

    return n_fact / (r_fact*sub_fact);
}
int main(){
    cout << "Binomial coefficient" << endl;
    int n, r;
    cout << "Enter the value of (n): ";
    cin >> n;
    cout << "Enter the value of (r): ";
    cin >> r;

    cout << "The binomial coeffcient of the " << n << "C" << r << " is: " << bin(n, r) << endl;
    return 0;
}