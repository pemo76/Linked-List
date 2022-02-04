#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
	vector<int>bfsOfGraph(int v, vector<int> adj[])
	{
	    vector<int>bfs;
	    vector<int>vis(v+1,0);
	    for(int i=1;i<=v;i++){
	        if(!vis[i]){
	            queue<int>q;
	            q.push(i);
	            vis[i]=1;
	            while(!q.empty()){
	                int node=q.front();
	                q.pop();
	                bfs.push_back(node);
	                for(auto it:adj[node]){
	                    if(!vis[it]){
	                        q.push(it);
	                        vis[it]=1;
	                    }
	                }
	            }
	        }
	    }
	    return bfs;
	}
};



int main()
{
	int t;
	cin>>t;
	while(t--){
		int v,e;
		cin>>v>>e;
		vector<int>adj[v];
		for(int i=0;i<e;i++){
			int a,b;
			cin>>a>>b;
			adj[i].push_back(v);
		}
		Solution obj;
		vector<int> ans=obj.bfsOfGraph(v,adj);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
