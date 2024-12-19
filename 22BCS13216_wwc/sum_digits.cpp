#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, revn=0, digit,sum=0;
    cout << "Enter number : ";
    cin >> n;
    int org = n;
    while(n!=0){
        digit = n%10;
        revn = revn*10 + digit;
        n/=10;
        sum=sum+digit;
    }
    cout << "Sum of digits of a number " << org << " is " << sum << endl;
    return 0;
}