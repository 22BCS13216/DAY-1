#include <iostream>
#include <iomanip>
using namespace std;
class Shape {
public:
    virtual double area()=0;
    virtual void input()=0;
};
class Circle : public Shape {
    private:
        double radius;
    public:
        void input() override {
            cout << "Enter the radius of the circle: ";
            cin >> radius;
        }
        double area() override{
            return 3.14159 * radius * radius;
        }
};

class Rectangle : public Shape {
    private:
        double length, breadth;
    public:
        void input() override {
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the breadth of the rectangle: ";
            cin >> breadth;
        }
        double area() override{
            return length * breadth;
        }
};

class Triangle : public Shape {
    private:
        double base, height;
    public:
        void input() override {
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
        }
        double area() override{
            return 0.5 * base * height;
        }
};

int main() {
    Circle circle;
    circle.input();
    Rectangle rectangle;
    rectangle.input();
    Triangle triangle;
    triangle.input();
    cout << "Area of circle is " << circle.area() << endl;
    cout << "Area of rectangle is " << rectangle.area() << endl;
    cout << "Area of triangle is " << triangle.area() << endl;
    return 0;
}