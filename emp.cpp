#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int ID;
    string Name;
    float Salary;
public:
    void setID(int id) {
        ID = id;
    }
    int getID() const {
        return ID;
    }
    void setName(const string& name) {
        Name = name;
    }
    string getName() const {
        return Name;
    }
    void setSalary(float salary) {
        Salary = salary;
    }
    float getSalary() const {
        return Salary;
    }
    void displayDetails() const {
        cout << "Employee ID: " << ID << endl;
        cout << "Employee Name: " << Name << endl;
        cout << "Employee Salary: ₹" << Salary << endl;
    }
};

int main() {
    Employee emp; 
    int id;
    string name;
    float salary;
    cout << "Enter Employee ID: ";
    cin >> id;
    emp.setID(id);

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);
    emp.setName(name);

    cout << "Enter Employee Salary: ";
    cin >> salary;
    emp.setSalary(salary);
    cout << "\nEmployee Details:\n";
    emp.displayDetails();
    return 0;
}