#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    int rollNumber;
    string name;
public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber; 
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    void display() {
        cout << endl << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};
class Result : public Student {
private:
    int marks[3];
public:
    void inputMarks() {
        cout << "Enter marks for three subjects: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }
    void calc() {
        int total = 0; 
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        float percentage = (total / 3.0); 
        display();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl; 
    }
};
int main() {
    Result result;
    result.input();
    result.inputMarks();
    result.calc();
    return 0;
}