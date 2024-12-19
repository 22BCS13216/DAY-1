#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout << "Enter the number upto which sum is required: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i%2!=0){
            sum = sum + i;
        }
    }
    cout << "Sum of " << n << " odd natural numbers : " << sum << endl;
    return 0;
}