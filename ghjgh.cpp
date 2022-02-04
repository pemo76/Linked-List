#include<bits/stdc++.h>
using namespace std;

int replace(int n)
{
	if(n==0){
		return 0;
	}
		int k=n%10;
		if(k==0){
			k=1;
		}
	return replace(n/10) *10 + k;
}


int main()
{
 int n;
 cin>>n;
 cout<<replace(n);
	
}
