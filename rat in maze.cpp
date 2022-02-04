#include<bits/stdc++.h>
using namespace std;
#define MAX  5

bool isSafe(int row, int col, int m[][MAX],int n, bool visited[][MAX])
{
    if (row == -1 || row == n || col == -1 || col == n || visited[row][col]  || m[row][col] == 0)
        return false;
    return true;
}


void prinPathUtil(int i,int j,int m[][MAX],int n,vector<string>& possiblePaths,string& path,bool visited[][MAX]){
	vector<string> s;
	if(i==n-1 && j==n-1){
		possiblePaths.push_back(path);
		return;
	}
	visited[i][j] = true;
	
	
	if (isSafe(i + 1, j, m, n, visited))
    {
        path.push_back('D');
       prinPathUtil(i + 1, j, m, n,possiblePaths,path, visited);
        path.pop_back();
    }
    
    if (isSafe(i, j + 1, m, n, visited))
    {
        path.push_back('R');
        prinPathUtil(i, j + 1, m, n,possiblePaths,path, visited);
        path.pop_back();
    }
    visited[i][j]=false;
}



void printPath(int m[MAX][MAX], int n)
{
    vector<string> possiblePaths;
    string path;
     bool visited[n][MAX];
    memset(visited, false, sizeof(visited));
   prinPathUtil(0, 0, m, n, possiblePaths,path,visited);
    for (int i = 0; i < possiblePaths.size(); i++)
        cout << possiblePaths[i] << " ";
}

int main()
{
    int m[MAX][MAX] = { { 1, 0, 0, 0, 0 },{ 1, 1, 1, 1, 1 },{ 1, 1, 1, 0, 1 },{ 0, 0, 0, 0, 1 },{ 0, 0, 0, 0, 1 } };
    int n = sizeof(m) / sizeof(m[0]);
    printPath(m, n);
 
    return 0;
}
