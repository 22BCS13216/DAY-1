#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Complex {
public:
    double real;
    double imaginary;
    Complex(double r = 0, double i = 0) {
        real = r;
        imaginary = i;
    }
    Complex add(Complex other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
    Complex multiply(Complex other) {
        Complex result;
        result.real = real * other.real - imaginary * other.imaginary;
        result.imaginary = real * other.imaginary + imaginary * other.real;
        return result;
    }
    double magnitude() {
        return sqrt(real * real + imaginary * imaginary);
    }
    void display() {
        if (imaginary >= 0) {
            cout << real << " + " << imaginary << "i" << endl;
        } 
        else {
            cout << real << " - " << abs(imaginary) << "i" << endl;
        }
    }
};

int main() {
    int choice;
    cout << "Enter operation type \n1. Addition \n2. Multiplication \n3. Magnitude" << endl;
    cin >> choice;
    if (choice == 1 || choice == 2) {
        double real1, imaginary1, real2, imaginary2;
        cout << "Enter first complex number (real part): ";
        cin >> real1;
        cout << "Enter first complex number (imaginary part): ";
        cin >> imaginary1;
        cout << "Enter second complex number (real part): ";
        cin >> real2;
        cout << "Enter second complex number (imaginary part): ";
        cin >> imaginary2;
        Complex c1(real1, imaginary1);
        Complex c2(real2, imaginary2);
        Complex result;
        if (choice == 1) {
            result = c1.add(c2);
            cout << "Result: ";
            result.display();
        } 
        else if (choice == 2) {
            result = c1.multiply(c2);
            cout << "Result: ";
            result.display();
        }
    } 
    else if (choice == 3) {
        double real, imaginary;
        cout << "Enter complex number (real part): ";
        cin >> real;
        cout << "Enter complex number (imaginary part): ";
        cin >> imaginary;
        Complex c(real, imaginary);
        double mag = c.magnitude();
        cout << "Magnitude of the complex number: " << fixed << setprecision(2) << mag << endl;
    } 
    else {
        cout << "Invalid operation type." << endl;
    }
    return 0;
}