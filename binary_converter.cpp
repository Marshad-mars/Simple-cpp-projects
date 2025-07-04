#include<iostream>
#include<bitset>
using namespace std;

int bin_convert(int num){
    int rem, pow = 1;
    int ans = 0;
    while(num > 0){
        rem = num % 2;
        ans += (rem * pow);
        pow *= 10;
        num /= 2;
    }
    return ans;
}
bitset<5> binary_converter(int value){
    bitset<5> binary(value);
    return binary;
}
int main(){
    int num;
    cout << "Enter your number(you can also find the binary of negative integers): ";
    cin >> num;
    if(num >= 0){
        cout << "The binary form of " << num << " is " << bin_convert(num) << endl;
    }
    else if(num <= 0){
        cout << "The binary form of " << num << " is " << binary_converter(num) << endl;
    }
    return 0;
}