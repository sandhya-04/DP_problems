#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1001][1001];  // time complexity O(n^2)
int mat[1001][1001];
int max(int a,int b,int c,int d){
	if(a>b && a>c && a>d)
	return a;
	if(b>a && b>c && b>d)
	return b;
	
	if(c>a && c>b && c>d)
	return c;
	if(d>a && d>b && d>c)
	return d;
}
int find(int i,int j){
	if(i<0 || i>=n || j<0 || j>=n)
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	int a=INT_MIN;
	int b=INT_MIN;
	int c=INT_MIN;
	int d=INT_MIN;
	if(j<n-1 && (mat[i][j]+1==mat[i][j+1])   )
	a=1+find(i,j+1);
	
	if(j>0 && (mat[i][j]+1==mat[i][j-1]))
	b=1+find(i,j-1);
	
	if(i<n-1 && (mat[i][j]+1==mat[i+1][j]))
	c=1+find(i+1,j);
	
	if(i>0 && (mat[i][j]+1==mat[i-1][j]))
	d=1+find(i-1,j);
	
	return dp[i][j]=max(a,max(b,max(c,max(d,1))));
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>mat[i][j];
			}
		}
		
		int res=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(dp[i][j]==-1)
				find(i,j);
				
				res=max(res,dp[i][j]);
			}
		}
		cout<<res<<endl;
	}
}
