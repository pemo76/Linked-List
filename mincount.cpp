#include<bits/stdc++.h>
using namespace std;

int dp(int n)
{
	if(n==0 || n==1 || n==2 || n==3){
		return n;
	}
    int *ans= new int[n+1];
    ans[0]=0;
    ans[1]=1;
    ans[2]=2;
    ans[3]=3;
    
    for(int i=4;i<=n;i++){
    	ans[i]=i;
		for(int x=1;x<=sqrt(i);i++){
			int temp=i*i;
			if(temp>i)
			     break;
			else
			    ans[i]=min(ans[i],1+ans[i-temp]);
		}
	}
	return ans[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<dp(n);
}


