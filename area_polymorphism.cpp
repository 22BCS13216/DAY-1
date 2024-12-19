#include <iostream>
#include <iomanip>
using namespace std;
class Shape {
public:
    virtual double area(){
        return 0;
    }
};
class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r){
            radius = r;
        }
        double area() override{
            return 3.14159 * radius * radius;
        }
};
class Rectangle : public Shape {
    private:
        double length, breadth;
    public:
        Rectangle(double l, double b){
            length = l;
            breadth = b;
        }
        double area() override{
            return length * breadth;
        }
};
class Triangle : public Shape {
    private:
        double base, height;
    public:
        Triangle(double b, double h){
            base = b;
            height = h;
        }
        double area() override{
            return 0.5*base*height;
        }
};

int main() {
    double radius, length, breadth, base, height;
    cout << "Enter\nA. Radius: ";
    cin >> radius;
    cout << "B. Length: ";
    cin >> length;
    cout << "C. Breadth: ";
    cin >> breadth;
    cout << "D. Base: ";
    cin >> base;
    cout << "E. Height: ";
    cin >> height;
    Circle circle(radius);
    Rectangle rectangle(length, breadth);
    Triangle triangle(base, height);
    cout << fixed << setprecision(2);
    cout << "Area of circle with radius " << radius << " is " << circle.area() << endl;
    cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is " << rectangle.area() << endl;
    cout << "Area of triangle with base " << base << " and height " << height << " is " << triangle.area() << endl;
    return 0;
}