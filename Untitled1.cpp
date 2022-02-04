//#include <iostream>
//using namespace std;
//
//
//void RotArray(int a[],int n,int k)
//{
// int b[n],i;
// for(i=0;i<n;i++)
//      b[(i+k)%n]=a[i];
// for(i=0;i<n;i++)
//     cout<<b[i]<<" ";
//}
//
//int main()
//{
// int n,i,k;
// cin>>n>>k;
// int a[n];
// for(i=0;i<n;i++)
// cin>>a[i];
// RotArray(a,n,k);
//
//return 0;
//}





#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	bool arr[10];
	for(int i=0;i<10;i++){
		arr[i]=false;
	}
	while(n>0){
		int temp=n%10;
		if(arr[temp])
		    return false;
		    arr[temp]=true;
		    n/=10;
	}
	return true;
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	int count=0;
	for(int i=n1;i<=n2;i++){
		if(check(i))
		   count++;
	}
	cout<<count;
}
