#include <iostream>
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
    if (revn==org){
        cout << "The number is a palindrome.";
    }
    else{
        cout << "The number is not a palindrome.";    
    }
    return 0;
}