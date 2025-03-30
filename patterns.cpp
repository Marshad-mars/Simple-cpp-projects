#include<iostream>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    int chos;
    int n, i, j, val=1, a, b;   //extra variable- val;

    cout << " " << "\n" << "Options-" << "\n" << "~Square pattern(1)" << "\n" << "~Rectangular pattern(2)" << "\n" << "~Right angled triangular pattern(3)" << "\n" << "~Floyd's Triangle(4)" << "\n~Up-side down right angled triangle(5)" << "\n~Mirror right angled triangle(6)" << endl;;
    cout << " " << endl;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == 1){  //square pattern
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
    else if(chos == 2){  //rectangular pattern
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
    else if(chos == 3){  //triangular pattern
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
    else if(chos == 4){  //floyd's triangle
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
    else if(chos == 5){  //reverse triangle
        cout << "Up-side down right angled triangle" << endl;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                cout << " *";
            }
            cout << endl;
        }
        for(a = n; a >= 1; a--){
            for(b = 1; b <= a; b++){
                cout << " *";
            }
            cout << endl;
        }
    }
    else if(chos == 6){
        cout << "Mirror right angled triangle" << endl;
        int n, i, a, b, m=1;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i = n; i >= 1; i--){
            for(a = 1; a <= i-1; a++){
                cout << "  ";
            }
            for(b = 1; b <= m; b++){
                cout << " *";
            }
            cout << endl;
            m++;
        }
    }
    return 0;
}