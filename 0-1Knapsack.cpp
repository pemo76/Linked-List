#include<bits/stdc++.h>
using namespace std;


int knapsack(int wt[], int val[], int W,int n)
{
    int i, w;
    int K[n + 1][W + 1];
 
    // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}


//int knapsack(int wt[],int val[],int w,int n){
//	int t[102][1002];
//    memset(t,-1,sizeof(t));
//    
//	if(n==0|| w==0)
//	     return 0;
//	if(t[n][w]!=-1){
//		return t[n][w];
//	}
//	int ans;
//	if(wt[n-1]<=w){
//		ans= max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
//	}
//	else{
//		ans=knapsack(wt,val,w,n-1);
//	}
//	t[n][w]=ans;
//	return t[n][w];
//}

int main()
{
    int n = 4, h = 10;
    int marksarr[n] = {  6, 4, 2, 8 }; 
    int timearr[n] = {  4, 6, 2, 7 }; 
    cout << knapsack(timearr,marksarr, h, n); 
}
