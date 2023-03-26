#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k[n][3];
    int l = 0;
    for (int i = 0; i < n; i++) {
        for (int m = 0; m < 3; m++) {
            cin >> k[i][m];
        }
    }
    int sum[n];
    for (int i = 0; i < n; i++) {
        sum[i] = k[i][0] + k[i][1] + k[i][2];
    }
    for (int i = 0; i < n; i++) {
        if (sum[i] == 2 || sum[i] == 3) {
            l++;
        }
    }
    cout << l;
}

