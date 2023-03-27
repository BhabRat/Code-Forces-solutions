#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll a, b;
    cin >> a >> b;
    int k[a];
    ll m = 0; // initialize m to zero
    for (int i = 0; i < a; i++) {
        cin >> k[i];
    }
    if (b <= 0 || b > a) { // Check if b is out of range
        cout << 0 << endl; // Add endl to flush the output buffer
        return 0; // Exit the program with 0 status
    }
    for (int i = 0; i < a; i++) {
        if (k[i] > 0 && k[i] >= k[b-1]) { // Simplify the condition
            m++;
        }
    }
    cout << m << endl; // Output the result and flush the output buffer
    return 0; // Exit the program with 0 status
}

