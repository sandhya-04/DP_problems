#include<bits/stdc++.h>
using namespace std;
//catalan number (no of BST can be formed by using n key dynamic

int find(int n){
	int dp[n+1]={0};
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			dp[i]+=dp[j-1]*dp[i-j];
		}
	}
	return dp[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<find(n)<<endl;
	}
}
