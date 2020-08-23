/*-------------subset sum problem------*/
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int a[1001];
int n;
int find(int i,int k)
{
	if(i>=n || k<0)
	return 0;
	if(dp[i][k]!=-1)
	return dp[i][k];
	if(k==0)
	return dp[i][k]=1;
	if(a[i]>k)
	return dp[i][k]=find(i+1,k);
	
	else
	return dp[i][k]=find(i+1,k-a[i]) | find(i+1,k);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		int k;
		cin>>k;
		cout<<find(0,k)<<endl;
	}
}
