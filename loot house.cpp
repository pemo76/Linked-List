#include<bits/stdc++.h>
using namespace std;


int dp(int *a,int n)
{
	int *ans=new int[n+1];
	int i;
	ans[0]=0;
	for(i=1;i<=n;i++){
		ans[i]=max((a[n-1]+ans[i-2]),ans[i-1]);
	}
	return ans[i];
}

int helper(int gold[],int n,int *ans)
{
    if(n <= 0)
         return 0;
    if(ans[n]!=-1){
    	return ans[n];
	}
    int x = gold[n-1] + helper(gold,n-2,ans);
    int y = helper(gold,n-1,ans);
    
    ans[n]=max(x,y);
    
    return ans[n];
}

int msxGold(int gold[],int n)
{
	int *ans=new int[n+1];
	for(int i=0;i<=n;i++){
		ans[i]=-1;
	}
	return helper(gold,n,ans);
}


//int maxGold (int gold[],int n)
//{
//    if(n <= 0)
//         return 0;
//    
//    int x = gold[n-1] + maxGold(gold,n-2);
//    int y = maxGold(gold,n-1);
//    
//    return max(select,notselect);
//}

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<msxGold(a,n)<<endl;
	cout<<dp(a,n);
}
