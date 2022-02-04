#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int mincount(int n)
{
	if(n<=1)
	    return 0;
	int x=mincount(n-1);
	int y=INT_MAX,z=INT_MAX;
	if(n%2==0){
		y=mincount(n/2);
	}
	if(n%3==0){
		z=mincount(n/3);
	}
	
	int answer=min(x,min(y,z))+1;
	        return answer;
}

int main()
{
	int n;
	cin>>n;
	cout<<mincount(n)<<endl;
}
