#include<bits/stdc++.h>
using namespace std;
 


//int coinchange(int a[],int n,int w)
//{
//		int t[102][1002];
//	memset(t,-1,sizeof(t));
//
//	if(w==0)
//	    return 1;
//	if(w<0)
//	    return 0;
//	if(n<=0)
//	    return 0;
//	if(t[n][w]!=-1){
//		return t[n][w];
//	}
//	int ans=coinchange(a,n,w-a[n-1]) + coinchange(a,n-1,w);
//	t[n][w]=ans;
//	return t[n][w];
//}


int coinchange(int a[],int n,int w){
	if(w==0)
	   return 1;
	if(w<0)
	   return 0;
	if(n<=0 && w>=1)
	   return 0;
	return coinchange(a,n-1,w)+coinchange(a,n,w-a[n-1]);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int W;
	cin>>W;
	cout<<coinchange(a,n,W);
}
