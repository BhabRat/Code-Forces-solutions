#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t;
	int k[t];
	int m=0;
	for (int i=0; i<t; i++){
		cin>>k[i];	}
	for (int i=0; i<t; i++){
		if (k[i]%10==(k[i]%100-k[i]%10)/10 && k[i]%10==(k[i]%1000-k[i]%100)/100 && k[i]%10==(k[i]%10000-k[i]%1000)/1000){
			cout<<-1;
		} else if (k[i]%10==(k[i]%10000-k[i]%1000)/1000 || k[i]%10==(k[i]%1000-k[i]%100)/100 || k[i]%10==(k[i]%100-k[i]%10)/10){
			if (k[i]%10==(k[i]%100-k[i]%10)/10 && k[i]%10==(k[i]%1000-k[i]%100)/100 && k[i]%10 != (k[i]%10000-k[i]%1000)/1000) {
				cout<<6;
			} else if ()
		}
		/*k[i]%10==(k[i]%100-k[i]%10)/10 second digit = first digit


		 k[i]%10==(k[i]%1000-k[i]%100)/100 first digit = third

		 k[i]%10==(k[i]%10000-k[i]%1000)/1000 first digit = last 
		 */

			}
	
	cout<<m;
}

