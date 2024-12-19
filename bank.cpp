#include <iostream>
using namespace std;
class Account {
public:
    virtual void calculateInterest() = 0; 
    virtual ~Account() {} 
};
class SavingsAccount : public Account {
private:
    double balance;
    double interestRate;
    int time;
public:
    SavingsAccount(double bal, double rate, int t) {
        balance = bal;
        interestRate = rate;
        time = t;
    }
    void calculateInterest() override {
        double interest = balance * (interestRate / 100) * time;
        cout << "Interest: " << interest << endl;
    }
};
class CurrentAccount : public Account {
private:
    double balance;
    double maintenanceFee;
public:
    CurrentAccount(double bal, double fee) {
        balance = bal;
        maintenanceFee = fee;
    }
    void calculateInterest() override {
        balance -= maintenanceFee;
        cout << "Balance after maintenance fee deduction: " << balance << endl;
    }
};
int main() {
    int accountType;
    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin >> accountType;
    if (accountType < 1 || accountType > 2) {
        cout << "Invalid account type." << endl;
        return 0;
    }
    double balance;
    cout << "Enter Account Balance: ";
    cin >> balance;
    if (balance < 1000 || balance > 1000000) {
        cout << "Invalid balance." << endl;
        return 0;
    }
    if (accountType == 1) { 
        double interestRate;
        int time;
        cout << "Enter Interest Rate (1-15): ";
        cin >> interestRate;
        if (interestRate < 1 || interestRate > 15) {
            cout << "Invalid interest rate." << endl;
            return 0;
        }
        cout << "Enter Time (years, 1-10): ";
        cin >> time;
        if (time < 1 || time > 10) {
            cout << "Invalid time." << endl;
            return 0;
        }
        SavingsAccount account(balance, interestRate, time);
        account.calculateInterest();
    } 
    else if (accountType == 2) { 
        double maintenanceFee;
        cout << "Enter Monthly Maintenance Fee (50-500): ";
        cin >> maintenanceFee;
        if (maintenanceFee < 50 || maintenanceFee > 500) {
            cout << "Invalid maintenance fee." << endl;
            return 0;
        }
        CurrentAccount account(balance, maintenanceFee);
        account.calculateInterest();
    }
    return 0;
}