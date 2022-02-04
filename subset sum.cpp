#include<bits/stdc++.h>
using namespace std;

int subset(int arr[],int n,int sum)
{
	int i,j;
	int dp[n+1][sum+1];
	
	for(i=0;i<=n;i++){
		for(j=0;j<=sum;j++){
			if(j==0){
				dp[i][j]=true;
			}
			else if(i==0){
				dp[i][j]=false;
			}
			else if(arr[i-1]>j){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=dp[i-1][j-arr[i-1]];
			}
		}
	}
	return dp[n][sum];
}


//int subset(int a[],int n,int sum)
//{
//	int t[102][1002];
//	memset(t,-1,sizeof(t));
//	if(sum==0)
//	    return true;
//	if(n==0)
//	    return false;
//	
//	if(t[n][sum]!=-1){
//		return t[n][sum];
//	}
//	int ans;
//	if(a[n-1]>sum){
//	    ans =  subset(a,n-1,sum);
//	}
//	else{
//	     ans = subset(a,n-1,sum)||subset(a,n-1,sum-a[n-1]);
//    }
//    t[n][sum]=ans;
//    return ans;
//}


//int subset(int a[],int n,int sum)
//{
//	if(sum==0)
//	     return true;
//	if(n==0)
//	     return false;
//	if(a[n-1]>sum)
//	      return  subset(a,n-1,sum);
//	return subset(a,n-1,sum)||subset(a,n-1,sum-a[n-1]);
//}

int main()
{
	int n,sum;
	cin>>n>>sum;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k=subset(arr,n,sum);
	if(k==true)
	      cout<<"true";
	else
	      cout<<"false";
}
