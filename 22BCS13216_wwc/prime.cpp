#include <iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    for(int i = 3; i < n; i+=2){
        if (n%i==0){
            return false;
        }
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (isPrime(n)){
        cout << n << " is prime." << endl;
    }
    else{
        cout << n << " is not prime." << endl;
    }
    return 0;
}