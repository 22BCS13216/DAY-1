#include <iostream>
using namespace std;
double Area(double radius) {
    cout<<"Shape: Circle" << endl;
    cout<<"Radius: " << radius << endl;
    return 3.14159 * radius * radius;
}
double Area(double length, double breadth) {
    cout<<"Shape: Rectangle"<< endl;
    cout<<"Length: "<< length <<endl;
    cout<<"Breadth: "<< breadth <<endl;
    return length * breadth;
}
float Area(float base, float height) {
    cout<<"Shape: Triangle"<< endl;
    cout<<"Base: "<< base <<endl;
    cout<<"Height: "<< height <<endl;
    return 0.5 * base * height;
}

int main() {
    int choice;
    double area;
    while (choice != 4) {
        cout << "Calculate area:\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = Area(radius);
                cout << "Area of the Circle: " << area << endl;
                break;
            }
            case 2: {
                double length, breadth;
                cout << "Enter the length and breadth of the rectangle: ";
                cin >> length >> breadth;
                area = Area(length, breadth);
                cout << "Area of the Rectangle: " << area << endl;
                break;
            }
            case 3: {
                float base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                area = Area(base, height);
                cout << "Area of the Triangle: " << area << endl;
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        cout << endl;
    }
    return 0;
}