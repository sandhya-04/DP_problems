/*-----------knapsack--------*/
#include<bits/stdc++.h>
using namespace std;
int val[1001];
int w[1001];
int n;
int dp[1001][1001];
int find(int i,int W)
{
	if(i>=n)
	return 0;
	if(dp[i][W]!=-1)
	return dp[i][W];
	if(w[i]>W)
	return dp[i][W]=find(i+1,W);
	
	else
	return dp[i][W]=max(find(i+1,W-w[i+1])+val[i+1],find(i+1,W));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		
		cin>>n;
		cout<<"------value array-----"<<endl;
		for(int i=0;i<n;i++)
		cin>>val[i];
		cout<<"-------weightage array------"<<endl;
		for(int i=0;i<n;i++)
		cin>>w[i];
		
		int W;
		cin>>W;
		cout<<find(0,W)<<endl;
	}
}
