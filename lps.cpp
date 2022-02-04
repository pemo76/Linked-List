#include<bits/stdc++.h>
using namespace std;


int dp[1000][1000];

int lcs(int i,int j,string s){
	if(i==j)
	   return 1;
	if(i>j)
	   return 0;
	if(dp[i][j]!=-1)
	    return dp[i][j];
	int ans;
	if(s[i]==s[j]){
	  ans= 2+lcs(i+1,j-1,s);
    }
    else{
    	ans=max(lcs(i+1,j,s),lcs(i,j-1,s));
	}
	dp[i][j]=ans;
	return dp[i][j];
	
}


//
//int lcs(int i,int j,string s){
//  if(i==j)
//    return 1;
//  if(i>j)
//    return 0;
//  if(s[i]==s[j])
//       return 2+lcs(i+1,j-1,s);
//  return max(lcs(i+1,j,s),lcs(i,j-1,s));	
//}


int main()
{
	string s;
	cin>>s;
	int n=s.size();
	cout<<lcs(0,n-1,s);
}
