#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            long long remainder = a % b;
            cout << b - remainder << endl;
        }
    }

    return 0;
}