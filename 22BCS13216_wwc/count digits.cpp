#include <iostream>
#include <math.h>
using namespace std;
int count(int n){
    int count = 0;
    n = abs(n);
    if (n == 0){
        return 1;
    }
    while (n>0){
        n/=10;
        count++;
    }
    return count;
}
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Number of digits : " << count(n) << endl;
    return 0;
}