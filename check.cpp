#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int low,int mid,int high){
	vector<int>temp;
	int left;
	int right=mid+1;
	int count=0;
	
	while(left<=mid && right<=high){
		if(arr[left]<=arr[right]){
		  temp.push_back(arr[left]);
		  left++;
	    }
	    else{
	    	temp.push_back(arr[right]);
	    	count+=mid-left+1;
	    	right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left++]);
	}
	while(right<=mid){
		temp.push_back(arr[right++]);
	}
	
	for(int i=low;i<=right;i++){
		arr[i]=temp[i-low];
	}
	return count;
}

int count(int arr[],int low,int high){
	if(low>high)
	   return 0;
	int mid=(low+high) >>1;
	int left=count(arr,low,mid);
	int right=count(arr,mid+1,high);
	int count=merge(arr,low,mid,high);
	return count+left+right;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<count(arr,0,n-1);
}




