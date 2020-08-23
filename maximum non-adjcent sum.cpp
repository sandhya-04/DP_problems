/*--------maximum adjacent sum---------*/
#include<bits/stdc++.h>
using namespace std;
int a[1001];
int n;
int dp[1001];
int find(int i)
{
	if(i>=n)
	return 0;
	if(dp[i]!=-1)
	return dp[i];
	else
	return dp[i]=max(find(i+2)+a[i],find(i+1));
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
		{
			cin>>a[i];
		}
		cout<<find(0)<<endl;
	}
}
