#include<iostream>
using namespace std;

int main() {
    cout << "Find the area of any quadrilateral shaped field or plain~" << endl;
    cout << "  " << endl;

    cout << "Choose any one of the following quadrilaterals you like-" << endl;
    cout << "1. Square" << "\n" << "2. Rectangle" << "\n" << "3.Parellelogram" << "\n" << "4. Rhombus" << "\n" << "5. Trapezium" << endl;

    int chos;
    cout << "------> ";
    cin >> chos;

    if(chos == 1){
        //area of a square
        cout << "   " << "\n" << "Find area of square shaped plain or field~" << endl;

        float len;
        cout << "Enter the length of your square shaped plain or field: ";
        cin >> len;

        float area = len * len;
        cout << "Area of your square shaped field or plain = " << area << endl;
        return area;
    }
    else if(chos == 2){
        //area of a rectangle
        cout << "   " << "\n" << "Find area of rectangular shaped plain or field~" << endl;

        float len;
        float wth;
        cout << "Enter the length of your rectangular shaped plain or field: ";
        cin >> len;
        cout << "Enter the width of your rectangular shaped plain or field: ";
        cin >> wth;

        float area = len * wth;
        cout << "Area of your rectangular shaped field or plain = " << area << endl;
        return area;
    }
    else if(chos == 3){
        //area of Parellelogram
        cout << "   " << "\n" << "Find area of Parellelogram shaped plain or field~" << endl;

        float base;
        float height;
        cout << "Enter the base of your Parellelogram shaped plain or field: ";
        cin >> base;
        cout << "Enter the height of your Parellelogram shaped plain or field: ";
        cin >> height;

        float area = base * height;
        cout << "Area of your Parellelogram shaped field or plain = " << area << endl;
        return area;
    }
    else if(chos == 4){
        //area of Rhombus
        cout << "   " << "\n" << "Find area of Rhombus shaped plain or field~" << endl;

        float base; 
        float height;
        cout << "Enter the base of your Rhombus shaped plain or field: ";
        cin >> base;
        cout << "Enter the height of your Rhombus shaped plain or field: ";
        cin >> height;

        float area = base * height;
        cout << "Area of your Rhombus shaped field or plain = " << area << endl;
        return area;
    }
    else if(chos == 5){
        //area of Trapezium
        cout << "   " << "\n" << "Find area of Trapezium shaped plain or field~" << endl;

        float per1;
        float per2;
        float height;
        cout << "Enter the length of the first parellel side: ";
        cin >> per1;
        cout << "Enter the lenght of the second parallel side: ";
        cin >> per2;
        cout << "Enter the height of the trapezium shaped field or plain: ";
        cin >> height;

        float area = 1/2*per1 + per2*height;
        cout << "Area of your Trapezium shaped field or plain = " << area << endl;
        return area;
    }
    return 0;
};
