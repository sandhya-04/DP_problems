/*---------longest common substring------*/
#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int dp[1001][1001];
int find(int i,int j,int ma)
{
	if(i==0 || j==0)
	return ma;
	//if(dp[i][j]!=-1)
	//return dp[i][j];
	if(s1[i-1]==s2[j-1])
	ma=find(i-1,j-1,ma+1);
	
	ma=max(ma,max(find(i-1,j,0),find(i,j-1,0)));
	
	return ma;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//memset(dp,-1,sizeof(dp));
		cin>>s1;
		cin>>s2;
		int n=s1.length();
		int m=s2.length();
		cout<<find(n,m,0)<<endl;
	}
}
