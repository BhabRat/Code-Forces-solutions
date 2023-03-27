#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k = s.size();
    string l;
    if (k==1){
        cout<<s;
    }    
    else {
        for(int i=1; i<k; i=i+2){
            l=s.erase(i, 1);
        }
 	cout<<l;
    }
}
