#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int y=1;
	for(i=0;i<n;i++){
		if(a[i]==0){
			a[i]=y;
		}
	}
	cout<<a[i];
}
