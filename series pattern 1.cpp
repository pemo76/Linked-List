#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a=0,b=0;
	cin>>n;
	if(n>30){
		cout<<"THE SERIES NUMBER IS EXCESSED!!";
	}
	if(n==0|| n==1){
		cout<<'0';
	}
	for(int i=1;i<n;i++){
		if(i%2!=0)
			a+=2;
		else
		    b++;
	}
	if(n%2!=0){
		cout<<a;
	}
	else{
		cout<<b;
	}
}
