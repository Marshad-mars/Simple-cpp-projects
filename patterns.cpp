#include<iostream>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    char chos[2];
    int n, i, j, val=0;

    cout << " " << "\n" << "Options- Square pattern(sp), Rectangular pattern(rp), Triangular pattern(tp)." << endl;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == "sp"){
        cout << "Square Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=0;i<=n;i++){
            for(j=0;j<=n;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(chos == "rp"){
        cout << "Rectangular Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
    }
    return 0;
}