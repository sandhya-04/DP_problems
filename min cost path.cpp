#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int min(int x,int y,int z)
{
	if(x<y && x<z)
	return x;
	else if(y<x && y<z)
	return y;
	else
	return z;
	
}
int minCost(vector<vector<int> > &v)
{
	int n=v.size();
	int m=v[0].size();
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			dp[i][j]+=v[i][j];
			if(i>0 && j>0)
			dp[i][j]+=min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
			
			if(i>0)
			dp[i][j]+=dp[i-1][j];
			else
			dp[i][j]+=dp[i][j-1];
		}
	}
	return dp[n-1][m-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int>> v( n , vector<int> (m, 0));
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>v[i][j];
		}
	}
	cout<<minCost(v)<<endl;
}
