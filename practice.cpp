#include<bits/stdc++.h>
using namespace std;
#define MAX 99999

int fibo(int n){
	int a=0,b=1,next;
	for(int i=1;i<=n;i++){
		next=a+b;
		a=b;
		b=next;
	}
	cout<<a;
}

int prime(int n)
{
	int count=0,flag,i,j;
	for(i=2;i<=MAX;i++)
	{
		flag=0;
		for(j=2;j<i;j++){
			if(i%j==0)
			{
			    flag=1;
			    break;
			}
		}
	    if(flag==0)
	    {
	       if(++count==n)
	       {
		       cout<<i;
		        break;
		    }
        }
    }
}

int main()
{
	int n;
	cin>>n;
	if(n%2==1)
	   fibo(n/2+1);
	else
	   prime(n/2);
}
