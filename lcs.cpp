#include<bits/stdc++.h>
using namespace std;

int dp(string s,string t,int **output)
{
	int m=s.size();
	int n=t.size();
	if(s.size()==0 || t.size()==0){
		return 0;
	}
	if(output[m][n]!=-1){
		return output[m][n];
	}
	int ans;
	if(s[0]==t[0]){
		ans= 1+dp(s.substr(1),t.substr(1),output);
	}
	else{
		int a=dp(s.substr(1),t,output);
		int b=dp(s,t.substr(1),output);
		int c=dp(s.substr(1),t.substr(1),output);
		
		ans= max(a,max(b,c));
	}
	output[m][n]=ans;
	return output[m][n];
}

int lcs(string s,string t)
{
	int m=s.size();
	int n=t.size();
	int **output=new int*[m+1];
	for(int i=0;i<=m;i++){
		output[i]=new int[n+1];
		for(int j=0;j<=n;j++){
			output[i][j]=-1;
		}
	}
	return dp(s,t,output); 
}


//int lcs(string s,string t)
//{
//	if(s.size()==0 || t.size()==0){
//		return 0;
//	}
//	
//	if(s[0]==t[0]){
//		return 1+lcs(s.substr(1),t.substr(1));
//	}
//	else{
//		int a=lcs(s.substr(1),t);
//		int b=lcs(s,t.substr(1));
//		int c=lcs(s.substr(1),t.substr(1));
//		
//		return max(a,max(b,c));
//	}
//}

int main()
{
	string s,t;
	cin>>s>>t;
	cout<<lcs(s,t)<<endl;
}
