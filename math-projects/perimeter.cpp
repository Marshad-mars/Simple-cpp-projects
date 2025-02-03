#include<iostream>
using namespace std;
int main(){
    cout << "Find the perimeter of any Quadrilateral shaped field or plain~" << "\n" << "  " << endl;

    cout << "Choose any type of Quadrilateral shaped field or plain-" << endl;
    cout << "1.Square" << "\n" << "2. Rectangle" << "\n" << "3.Parellelogram" << "\n" << "4. Rhombus" << "\n" << "5. Trapezium" << "\n" << "   " << endl;
    
    int chos;
    cout << "Enter your choise: ";
    cin >> chos;
    if(chos == 1){
        //perimeter of square-
        float len;
        cout << "Enter the length of you square: ";
        cin >> len;
        
        float per = 4*len;
        cout << "The perimeter of your square field or plain: " << per << endl;
        return per;
    }
    else if(chos == 2){
        //perimeter of rectangle-
        float len,width;
        cout << "Enter the length of your Rectanglular shaped plain or field: ";
        cin >> len;
        cout << "Enter the width of your Rectanglular shaped plain or field: ";
        cin >> width;

        float per = 2*(len + width);
        cout << "Perimeter of your Rectangular shaped plain or field: " << per << endl;
        return per;
    }
    else if(chos == 3){
        //perimeter of parellelogram
        float prl_1,prl_2,prl_3,prl_4;
        cout << "Enter the length of your first parellel side: ";
        cin >> prl_1;
        cout << "Enter the length of your second parellel side: ";
        cin >> prl_2;
        cout << "Enter the length of your third parellel side: ";
        cin >> prl_3;
        cout << "Enter the length of your fourth parellel side: ";
        cin >> prl_4;

        float per = prl_1 + prl_2 + prl_3 + prl_4;
        cout << "Perimeter of your Parellelogram shaped field or plain: " << per << endl;
        return per;  
    }
    else if(chos == 4){
        //perimeter of rhombus
        float prl_1,prl_2,prl_3,prl_4;
        cout << "Enter the length of your first parellel side: ";
        cin >> prl_1;
        cout << "Enter the length of your second parellel side: ";
        cin >> prl_2;
        cout << "Enter the length of your third parellel side: ";
        cin >> prl_3;
        cout << "Enter the length of your fourth parellel side: ";
        cin >> prl_4;

        float per = prl_1 + prl_2 + prl_3 + prl_4;
        cout << "Perimeter of your Rhombus shaped field or plain: " << per << endl;
        return per;  
    }
    else{
        //perimeter of trapezium
        float height, prl_1, prl_2;
        cout << "Enter the height of your trapezium shaped field or plain: ";
        cin >> height;
        cout << "Enter the length of your first parellel side: ";
        cin >> prl_1;
        cout << "Enter the length of your second parellel side: ";
        cin >> prl_2;

        float per = 1/2*prl_1 + prl_2*height;
        cout << "Perimeter of your trapezium shaped field or plain: " << per << endl;
        return per;
    }
    return 0;
}