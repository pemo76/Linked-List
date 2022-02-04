#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
	if(a==0 || b==0)
	   return 0;
	if(a==b)
	   return a;
	if(a>b)
	   return (a-b,b);
	return (a,b-a);
	
 }





int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
