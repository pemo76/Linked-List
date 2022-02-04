#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int even=0,odd=0;
	while(n>0){
		if(i%2==0)
		     even+=n%10;
		else
		     odd+=n%10;
		n/=10;
		i++;
	}
	int k=abs(even-odd);
	cout<<k;
}
