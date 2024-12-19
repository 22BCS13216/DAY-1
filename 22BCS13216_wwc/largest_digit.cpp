#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, orgn, digit;
    cout << "Enter number : ";
    cin >> n;
    orgn=n;
    int l = 0;
    while(n > 0){
        digit = n%10;
        if (digit > l){
            l = digit;
        }
        n/=10;
    }
    cout << "Largest digit in a number " << orgn << " is " << l << endl;
    return 0;
}