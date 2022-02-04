#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int countBT(int h) {
	
	long long int dp[h + 1];
	//base cases
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= h; i++) {
		dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%mod + dp[i - 1])%mod) % mod;
	}
	return dp[h];
}


int main()
{
	int h;
	cin>>h;
	cout<< countBT(h) << endl;
}





//int dp(int h,int *ans)
//{
//	if(h<=1)
//	     return 1;
//	if(ans[h]!=-1){
//		return ans[h];
//	}
//	
//	int x= dp(h-1,ans);
//	int y= dp(h-2,ans);
//	
//	int output=x*x + 2*x*y;
//	ans[h]=output;
//	
//	return ans[h];
//}
//
//
//int balance(int h)
//{
//	int *ans=new int[h+1];
//	for(int i=0;i<=h;i++){
//		ans[i]=-1;
//	}
//	return dp(h,ans);
//}


//int balance(int h)
//{
//	if(h<=1)
//	     return 1;
//	int x=balance(h-1);
//	int y=balance(h-2);
//	
//	int ans= x*x + 2*(x*y);
//	return ans;
//}

//int main()
//{
//	int n;
//	cin>>n;
//	cout<<balance(n);
//}
