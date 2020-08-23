/*------------longest common subsequnce-------*/
#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int dp[1001][1001];
int find(int i,int j)
{
	if(s1[i]=='\0' || s2[j]=='\0')
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	if(s1[i]==s2[j])
	return dp[i][j]=1+find(i+1,j+1);
	else
	return dp[i][j]=max(find(i+1,j),find(i,j+1));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>s1;
		cin>>s2;
		cout<<find(0,0)<<endl;
	}
}
