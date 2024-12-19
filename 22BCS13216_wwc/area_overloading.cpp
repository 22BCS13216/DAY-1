#include <iostream>
using namespace std;
float area(float r) {
    const float PI = 3.14159;
    float area = PI*r*r;
    return area;
}
float area(float l, float br) {
    float area = l*br;
    return area;
}
double area(double h, double b) {
    float area = 0.5*b*h;
    return area;
}

int main() {
    float r, l, br;
    double b, h;
    cout << "Enter\nA. Radius: ";
    cin >> r;
    cout << "B. Length: ";
    cin >> l;
    cout << "C. Breadth: ";
    cin >> br;
    cout << "D. Base: ";
    cin >> b;
    cout << "E. Height: ";
    cin >> h;

    cout << "Area of circle with radius " << r << " is " << area(r) << endl;
    cout << "Area of rectangle with length " << l << " and breadth " << b << " is " << area(l,br) << endl;
    cout << "Area of triangle with base " << b << " and height " << h << " is " << area(b,h) << endl;
    return 0;
}