//#include<bits/stdc++.h>
//using namespace std;
//
//void SubString(int limit){
//	int a,b,c=0;
//	int m=2;
//	while(c<limit){
//		for(int n=1;n<m;n++){
//			a=m*m-n*m;
//			b=2*n*m;
//			c=m*m+n*n;
//			if(c>limit)
//			    break;
//			cout<<a<<" "<<b<<" "<<c<<" "<<endl;
//		}
//		m++;
//	}
//}
//
//int main()
//{
//	int limit=20;
//	SubString(limit);
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int count(int n){
//	int k=n;
//	int ans=0;
//	while(n>0){
//		int temp=k%10;
//		ans++;
//		n/=10;
//	}
//	return ans;
//}
//
//bool armstrong(int n){
//	int z=n;
//	int temp=n;
//	int x=count(n),ans=0;
//	while(n>0){
//		temp=n%10;
//		ans+=pow(temp,x);
//		n/=10;
//	}
//	if(ans==z)
//	    return true;
//	return false;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	if(armstrong(n))
//	      cout<<"YES";
//	else
//	     cout<<"NO";
//}






//#include<bits/stdc++.h>
//#include<unordered_map>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	vector<int>a(n);
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//    unordered_map<int,int>mp;
//	for(int i=0;i<n;i++){
//		mp[a[i]]++;
//	}
//	map<int,int>::iterator it;
//	for(it=mp.begin();it!=mp.end();it++){
//		cout<<it->first<< " "<<it->second<<endl;
//	}
//	
//}



#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    map<int,int>::iterator i;
    for(i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<" ";
    }
}

