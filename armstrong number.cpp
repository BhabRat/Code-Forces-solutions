#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    int temp = n, sum = 0;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    return (n == sum);
}

int main() {
    int t; // number of test cases
    cin >> t;
    while(t--) {
        int n; // number to be checked
        cin >> n;
        if(isArmstrong(n)) {
            cout << n << " is an Armstrong number.\n";
        }
        else {
            cout << n << " is not an Armstrong number.\n";
        }
    }
    return 0;
}

