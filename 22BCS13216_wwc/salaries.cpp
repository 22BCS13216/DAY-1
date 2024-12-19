#include <iostream>
using namespace std;
int sal(int base_e, int bonus_e) {
    int sal = base_e + bonus_e;
    return sal;
}
int sal(int base_m, int bonus_m, int inc_m) {
    int sal = base_m + bonus_m + inc_m;
    return sal;
}

int main() {
    int stipend, base_e, bonus_e, base_m, bonus_m, inc_m;
    cout << "Enter\nA. Stipend: ";
    cin >> stipend;
    cout << "B. Base salary for employee: ";
    cin >> base_e;
    cout << "C. Bonus for employee: ";
    cin >> bonus_e;
    cout << "D. Base salary for manager: ";
    cin >> base_m;
    cout << "E. Bonus for manager: ";
    cin >> bonus_m;
    cout << "F. Incentive for manager: ";
    cin >> inc_m;

    cout << "Intern salary : " << stipend << endl;
    cout << "Employee salary : " << sal(base_e, bonus_e) << endl;
    cout << "Manager salary : " << sal(base_m, bonus_m, inc_m) << endl;
    return 0;
}