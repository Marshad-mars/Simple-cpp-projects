#include<iostream>
using namespace std;

int main(){
    std::cout << "Find the total surface area of any 3-D figure~" << "\n" << "   " << endl;

    cout << "Choose any one of the following 3-D figure-" << endl;
    cout << "1. Cube" << "\n" << "2. Cuboid" << endl; 
    int chos;
    cout << "Enter your choice: ";
    cin >> chos; 

    if(chos == 1){
        cout << "  " << "'Cube*'" << endl;
        float len;
        cout << "Enter the length of your cube: ";
        cin >> len;

        float area = 6*(len*len);
        cout << "Total surface area of the cube: " << area << endl;
        return area;
    }
    else if(chos == 2){
        cout << "  " << "'Cuboid*'" << endl;
        float len;
        float width;
        float height;

        cout << "Enter the length of yout cuboid: ";
        cin >> len;
        cout << "Enter the breadth of your cuboid: ";
        cin >> width;
        cout << "Enter thr height of your cuboid: ";
        cin >> height;

        float area = 2*(len*width + len*height + width*height);
        cout << "The total surface area of the cuboid is " << area << endl;
        return area;
    }
    return 0;
}
