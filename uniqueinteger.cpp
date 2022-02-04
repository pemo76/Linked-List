#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int size){
	int n=size,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j && arr[i]==arr[j])
			       break;
		}
		if(j==n)
			return arr[i];
	}
	return -1;

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<unique(arr,n);
}
