#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "           {Find the interest of any amount of retuen}" << endl;
    cout << "Choises of the type of Interest- simple interest(si) and compound interest(ci)." << endl;
    string chos;

    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == "si"){
	cout << "Your are calculating Simple interest." << endl;
	int prin, time, rate, inter, amount;

	cout << "Enter the principal amount: ";
	cin >> prin;
	cout << "Enter the time period of return: ";
	cin >> time;
	cout << "Enter the rate of interest: ";
	cin >> rate;
	
	inter = prin*time*rate / 100;
	amount = prin + inter;

	cout << "The amount of the sum would be " << (double)amount << " and the interest of the sum would be " << (double)inter << endl;
    }
    else if(chos == "ci"){
		cout << "You are calculating Compound Interest." << endl;
		int prin, time, rate, inter, amount;
		int val; 

		cout << "Enter the principal amount: ";
		cin >> prin;
		cout << "Enter the time period of return: ";
		cin >> time;
		cout << "Enter the rate of interest: ";
		cin >> rate;
		
	}
    return 0;
}
