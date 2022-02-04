#include<iostream>
using namespace std;

//int staircase(int n,int *ans){
//	if(n==1 || n==0)
//	      return 1;
//    if(n==2)
//          return 2;
//    if(ans[n]!=-1){
//    	return ans[n];
//	}
//	
//	int a= staircase(n-1,ans);
//	int b=staircase(n-2,ans);
//	int c=staircase(n-3,ans);
//	
//	int k=a+b+c;
//	ans[n]=k;
//	return k;
//}
//
//
//int staircount(int n)
//{
//	int *ans= new int[n+1];
//	for(int i=0;i<=n;i++){
//		ans[i]=-1;
//	}
//	return staircase(n,ans);
//}

int staircount(int n)
{
	int i;
	int *ans= new int[n+1];
	ans[0]=1;
	ans[1]=1;
	ans[2]=2;
	for(i=3;i<=n;i++){
		ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
	}
	return ans[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<staircount(n)<<endl;
}
