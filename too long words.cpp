#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;
    string k[n];
    string first[n];
    string last[n];
    int size[n];

    for(int i = 0; i < n; i++) {
        cin >> k[i];
        size[i] = k[i].length();
    }

    for(int i = 0; i < n; i++) {
        if(size[i] > 10) {
            first[i] = k[i][0];
            last[i] = k[i][size[i] - 1];
            cout << first[i] << size[i] - 2 << last[i] << endl;
        }
        else {
            cout << k[i] << endl;
        }
    }
    
    return 0;
}
