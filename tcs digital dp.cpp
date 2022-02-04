#include<bits/stdc++.h>
using namespace std;

//int marks(int N[],int M[],int t,int n){
//	if(n==0|| t==0){
//		return 0;
//	}
//	if(N[n-1]<=t)
//		return max(M[n-1]+marks(N,M,t-N[n-1],n-1),marks(N,M,t,n));
//	return marks(N,M,t,n);
//}




//int marks(int N[],int M[],int t,int n)
//{
//	int  T[102][1002];
//	memset(T,-1,sizeof(T));
//	if(n==0||t==0)
//		return 0;
//	if(T[n][t]!=-1){
//		return T[n][t];
//	}
//	int ans;
//	if(N[n-1]<=t){
//		ans=max(M[n-1]+marks(N,M,t-N[n-1],n-1),marks(N,M,t,n-1));
//	}else{
//		ans=marks(N,M,t,n-1);
//	}
//	T[n][t]=ans;
//	return ans;
//}


int marks(int N[],int M[],int t,int n){
	int i,T;
	int dp[n+1][t+1];
	for(i=0;i<=n;i++){
		for(T=0;T<=t;T++){
			if(i==0||T==0)
			      dp[i][T]=0;
			else if(N[i-1]<=T){
				dp[i][T]=max(M[i-1]+dp[i-1][T-N[i-1]],dp[i-1][T]);
			}
			else{
				dp[i][T]=dp[i-1][T];
			}
		}
	}
	return dp[n][t];
}






int main()
{
	
	int N[]={4, 6, 2, 7};
	int M[]={6, 4, 2, 8};
	int t=10;
	int n=4;
	cout<<marks(N,M,t,n)<<endl;
}
