#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string k[n];
	int a=0;

	for (int i=0; i<n; i++) {
		cin>>k[i];
	}
	for (int i=0; i<n; i++) {
		if(k[i]=="X++" || k[i]=="++X"){
			a++;
		}
		else if (k[i]=="X--" || k[i]=="--X"){
			a--;
		}
	}
	cout<<a;


}