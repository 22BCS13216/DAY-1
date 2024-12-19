#include <iostream>
using namespace std;
int main() {
    int n, sum;
    cout << "Enter the number upto which sum is required: " << endl;
    cin >> n;
    sum = (n*(n+1)/2);
    cout << "Sum of " << n << " natural numbers : " << sum << endl;
    return 0;
}