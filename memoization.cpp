#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pi pair<int,int>
#define vi vector<int> 
#define vli vector<long>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define ll long long int


void solve(){
    int n;
    cin>>n;
    int a[n];
    int dp[n];
    for(int i = 0 ; i  <n ; i++){
        cin>>a[i];
        dp[i] = a[i];

    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(a[i]%a[j] == 0)
                dp[i] = max(dp[i], dp[j]);
        }
    }
    int ans = INT_MIN;
    for(int i = 0 ; i < n ;i--){
        ans = max(dp[i],ans);
    }
    cout<<ans;
    }
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
