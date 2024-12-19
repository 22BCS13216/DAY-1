#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, revn=0, digit;
    cout << "Enter number : ";
    cin >> n;
    int org = n;
    while(n!=0){
        digit = n%10;
        revn = revn*10 + digit;
        n/=10;
    }
    cout << "Reverse of a number " << org << " is " << revn << endl;
    return 0;
}