#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	/*****************************/
	int k = opt<int>(1);
	int Ln,Rn,Lm,Rm;
	if(k<=3){
		Ln=2,Rn=10;
		Lm=1,Rm=20;
	}else if(k<=7){
		Ln=15,Rn=100;
		Lm=25,Rm=1000;
	}else if(k<=9){
		Ln=5000,Rn=10000;
		Lm=50000,Rm=200000;
	}else{
		Ln=Rn=10000;
		Lm=Rm=200000;
	}
	int n=rnd.next(Ln,Rn);
	int m=rnd.next(Lm,Rm);
	cout<<n<<" "<<m<<"\n";
	for(int i=1;i<=m;i++){
		int z=rnd.next(1,2);
		if(i==1) z=2;
		int x=rnd.next(1,n),y=rnd.next(1,n);
		cout<<z<<" "<<x<<" "<<y<<"\n";
	}
	return 0;
}