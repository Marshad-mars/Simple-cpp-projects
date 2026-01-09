#include<iostream>
using namespace std;

int main(){
    cout << "               {Find your desired pattern!}" << endl;
    int chos;
    cout << " " << "\n" << "[Options]-" << "\n" << "~Square pattern(1)" << "\n" << "~Rectangular pattern(2)" << "\n" << "~Right angled triangular pattern(3)" << "\n" << "~Floyd's Triangle(4)" << "\n~Up-side down right angled triangle(5)" << "\n~Mirror right angled triangle(6)" << "\n~Inverted mirror right angled triangle(7)";
    cout << "\n~Half diamond(8)" << "\n~Mirror half diamond(9)" << "\n~Parallelogram(10)" << "\n~Even 11's power pyramid(11)" << endl;
    cout << "\n~Star Pyramid(12)" << endl;
    cout << "\n[Special Patterns]-" << endl;
    cout << "~Marshad's_matrix(-1)" << "\n~Number_Funnel(-2)" << endl;

    cout << " " << endl;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == 1){  //square pattern
        cout << "Square Pattern" << endl;
        int n, i, j;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cout << "* ";
            }
            cout << endl;
        }
    } else if(chos == 2){  //rectangular pattern
        int len, n, i, j;
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
    } else if(chos == 3){  //triangular pattern
        cout << "Right triangular Pattern" << endl;
        int n, i, j;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
    } else if(chos == 4){  //floyd's triangle
        cout << "Floyd's Triangle" << endl;
        int n, i, j, val = 1;
        cout << "Enter the range(n): ";
        cin >> n;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout << val << " ";
                val++;
                if(val == j){
                    cout << endl;
                }
            }
            cout << endl;
        }
    } else if(chos == 5){  //reverse triangle
        cout << "Up-side down right angled triangle" << endl;
        int n, i, j, a, b;
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
    } else if(chos == 6){
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
    } else if(chos == 7){
        cout << "Inverted mirror tight angled triangle" << endl;
        int n, i, a, b, c;
        cout << "Enter the raneg(n): ";
        cin >> n;
        for(i = n; i >= 1; i--){
            if(i == n){
                for(a = 1; a <= i; a++){
                    cout << " *";
                }
                cout << endl;
            }
            else{
                for(b = 1; b <= n-i; b++){
                    cout << "  ";
                }
                for(c = 1; c <= i; c++){
                    cout << " *";
                }
                cout << endl;
            }
        }
    } else if(chos == 8){
        cout << "Half diamond" << endl;
        int n, i, j, a, b;
        cout << "Enter your range(n): ";
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
    } else if(chos == 9){
        cout << "Mirror image of the half diamond" << endl;
        int n, i, a, b, m=1, j, c, d, e;
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
        for(j = n; j >= 1; j--){
            if(j == n){
                for(c = 1; c <= j; c++){
                    cout << " *";
                }
                cout << endl;
            }
            else{
                for(d = 1; d <= n-j; d++){
                    cout << "  ";
                }
                for(e = 1; e <= j; e++){
                    cout << " *";
                }
                cout << endl;
            }
        }
    } else if(chos == 10){
        cout << "chose11, parallelogram" << endl;
        int height;
        cout << "Enter the height of your pattern: ";
        cin >> height;
        int value = 1;
        for(int i = 1; i <= height; i++){
            for(int a = 1; a < i; a++){
                cout << " " << " ";
            }
            for(int b = height; b >= 1; b--){
                cout << value << " ";
            }
            cout << endl;
            value++;
        }
    } else if(chos == 11){
        cout << "chos11, Even 11's power pyramid" << endl;
        int height;
        cout << "Enter the height of your pattern: ";
        cin >> height;

        int value_a = height-1;
        for(int i = 1; i <= height; i++){
            for(int a = 1; a <= value_a; a++){
                cout << " " << " ";
            }
            for(int b = 1; b <= i; b++){
                cout << b << " ";
            }
            for(int c = i-1; c >= 1; c--){
                cout << c << " ";
            }
            cout << endl;
            value_a--;
        }
    } else if(chos == 12){
        cout << "Star Pyramid" << endl;
        int height;
        cout << "Enter the height of your pattern: ";
        cin >> height;

        int space_val = height-1;
        for(int i = 1; i <= height; i++){
            for(int a = 1; a <= space_val; a++){
                cout << " ";
            }
            for(int b = 1; b <= i; b++){
                cout << "*" << " ";
            }
            cout << endl;
            space_val--;
        }
    } else if(chos == -1){
        cout << "chos-1, Marshad's_matrix" << endl;
        int height;
        cout << "Enter the height of your pattern: ";
        cin >> height;

        int value = 1;
        for(int i = 1; i <= height; i++){
            for(int j = 1; j <= height; j++){
                if(i > 1){
                    for(int a = 1; a < i; a++){
                        cout << " " << " ";
                    }
                    cout << value << " ";
                }
            }
            cout << endl;
            value++;
        }
        cout << "Marshad's_Matrix" << endl;
    } else if(chos == -2){
        cout << "chos-2, Number_Funnel" << endl;

        int height;
        cout << "Enter the height of your pattern, which is >= 11: ";
        cin >> height;
        while(height < 11){
            cout << "You have entered value lower then 11, pleade enter greater value: ";
            cin >> height;
        }
        int value = 1, b_len = height;
        for(int i = 1; i <= height; i++){
            for(int a = 1; a < i; a++){
                cout << " " << " ";
            }
            for(int b = b_len; b >= 1; b--){
                cout << value << " ";
            }
            cout << endl;
            value++;
            b_len--;
        }
    }
    return 0;
}