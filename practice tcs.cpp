#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int xp,count=0;
	cin>>xp;
    for(int i=0;i<n;i++){
    	if(arr[i]==xp)
    	count++;
	}
	cout<<count;
}
