#include <bits/stdc++.h>
using namespace std;

int main(){
	int k[5][5];
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cin>>k[i][j];
		}
	}
	if(k[2][2]==1){
		cout<<0;
	} else if (k[1][2]==1 || k[3][2]==1 || k[2][1]==1 || k[2][3]==1){
		cout<<1;
	} else if (k[3][3]==1 || k[1][3]==1 || k[3][1]==1 || k[1][1]==1 || k[2][4]==1 || k[4][2]==1 || k[2][0]==1 || k[0][2]==1){
		cout<<2;
	}else if (k[1][4]==1 || k[4][1]==1 || k[4][3]==1 || k[3][4]==1 || k[3][0]==1 || k[0][3]==1 || k[1][0]==1 || k[0][1]==1){
		cout<<3;
	} else if (k[4][4]==1 || k[0][4]==1 || k[4][0]==1 || k[0][0]==1){
		cout<<4;
	}

//this is kind of a weird brute force method but oh well, I could not think of an efficient algorithm 


}
