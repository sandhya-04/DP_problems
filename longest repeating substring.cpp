/*------------longest repaeting substring-------*/
#include<bits/stdc++.h>
using namespace std;
string s;
int dp[1001][1001];
int find(int i,int j,int ii,int jj)
{
	if(j>=s.length())
	return 0;
	if(dp[i][j]!=-1)
	return dp[i][j];
	if(s[i]==s[j] && i<jj)
	return 1+find(i+1,j+1,ii,jj);
	else
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			dp[i][j]=-1;
		}
		cin>>s;
		int ma=0;
		int start;
		int len;
		for(int i=0;i<s.length();i++)
		{
			for(int j=i;j<s.length();j++)
			{
				int res=find(i,j,i,j);
				if(res>ma)
				{
				
				 ma=res;
				 start=i;
				 len=res;
			 }
			}
		}
		cout<<ma<<endl;
		cout<<s.substr(start,len)<<endl;
		
	}
	return 0;
}

