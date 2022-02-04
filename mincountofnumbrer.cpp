#include<bits/stdc++.h>
using namespace std;

int mincount(int n){
	int dp[n+1];
	dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=INT_MAX;
		if(i%2==0){
			int x=dp[i/2];
			if(x+1<dp[i]){
				dp[i]=x+1;
			}
		}
		int x=dp[i-1];
		if(x+1<dp[i]){
			dp[i]=x+1;
		}
	}
	return dp[n];
}

int main()
{
	int n=8;
	cout<<mincount(n);
}
