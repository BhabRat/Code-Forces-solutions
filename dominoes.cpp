#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin>>m>>n;
	int a;
	int b, c;
	a=m*n;
	if (a%2==0){
		cout<<a/2;
	}
	else {
		b=a%2;
		c=(a-b)/2;
		cout<<c;
	}
	return 0;
}
