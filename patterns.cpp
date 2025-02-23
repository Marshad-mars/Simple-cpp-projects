#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    string chos;
    int n, i, j, val=1;   //extra variable- val;

    cout << " " << "\n" << "Options- Square pattern(sp), Rectangular pattern(rp), Triangular pattern(tp), Floyd's Triangle(ft)" << endl;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == "sp"){
        cout << "Square Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
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
        for(i=1;i<=n;i++){
            for(j=1;j<=len;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(chos == "tp"){
        cout << "Triangular Pattern" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(chos == "ft"){
        cout << "Floyd's Triangle" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout << val << " ";
                val ++;
                if(val == j){
                    cout << endl;
                }
            }
            cout << endl;
        }
    }
    return 0;
}