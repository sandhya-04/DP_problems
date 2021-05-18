#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int a[10001];
int n;
int find(int i)
{
	if(i>=n)
	return 0;
	if(dp[i]!=-1)
	return dp[i];
	else
	{
		int ma=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>=a[i])
			ma=max(ma,1+find(j));
		}
		return dp[i]=ma;
	}
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
		cout<<n-find(0)<<endl;
	}
}
