#include<iostream>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    char chos[10];
    int n, i, j, val=0;   //extra variable- val;

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
        int len;
        cout << "Rectangular Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        cout << "Enter the length range of your rectangular pattern: ";
        cin >> len;
        for(i=0;i<=n;i++){
            for(j=0;j<=len;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(chos == "tp"){
        cout << "Triangular Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<n;i++){
            val += i;
            for(j=0;j<=val;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}