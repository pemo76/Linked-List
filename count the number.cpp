#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0,temp,rem;
	int M=n;
	while(n>0){
		temp=n%10;
		rem+=temp*10;
		count++;
		n/=10;
	}
	cout<<count;
     
}
