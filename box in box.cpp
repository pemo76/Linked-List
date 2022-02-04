#include<bits/stdc++.h>
#include<queue>
#define ll long long int
using namespace std;
int mincount(ll arr[],ll n){
	queue<ll>q;
	sort(arr,arr+n);
	q.push(arr[0]);
	for(ll i=1;i<n;i++){
		ll x=q.front();
		if(arr[i]>=2*x){
			q.pop();
		}
		q.push(arr[i]);
	}
	return q.size();
}

 int main()
 {
 	ll n;
 	cin>>n;
 	ll arr[n];
 	for(ll i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 
	 ll k= mincount(arr,n);
	 cout<<k;
 }
