/*---------longest palindromic subsequnce-------*/
// time complexity is O(n^2) which is better than recursive approach
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1001][1001];
string s;
ll find(ll i,ll j)
{
	if(i==j)
	return 1;
	if(dp[i][j]!=-1)
	return dp[i][j];
	if(s[i]==s[j] && i+1==j) // 2 character
	return 2;
	
	if(s[i]==s[j])
	return dp[i][j]=find(i+1,j-1)+2;
	
	else
	return dp[i][j]=max(find(i+1,j),find(i,j-1));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>s;
		cout<<find(0,s.length()-1)<<endl;
	}
}
