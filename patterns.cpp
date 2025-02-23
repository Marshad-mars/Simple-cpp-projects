#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    string chos;
    int n, i, j, val=1;   //extra variable- val;

    cout << " " << "\n" << "Options-" << "\n" << "Square pattern(sp)" << "\n" << "Rectangular pattern(rp)" << "\n" << "Triangular pattern(tp)" << "\n" << "Floyd's Triangle(ft)" << "Reverse Triangle(rt)" << endl;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == "sp"){  //square pattern
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
    else if(chos == "rp"){  //rectangular pattern
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
    else if(chos == "tp"){  //triangular pattern
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
    else if(chos == "ft"){  //floyd's triangle
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
    else if(chos == "rt"){  //reverse triangle
        cout << "Reverse Triangle" << endl;
    }
    return 0;
}