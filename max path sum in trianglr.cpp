#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int find(int i,int j,vector<vector<int> >&A){
    if(i==A.size() || j==A.size())
    return 0;
    
    if(dp[i][j]!=-1)
    return dp[i][j];
    
    return dp[i][j]=A[i][j]+max(find(i+1,j,A),find(i+1,j+1,A));
}
int solve(vector<vector<int> > &A) {
    memset(dp,-1,sizeof(dp));
    
    return find(0,0,A);
    
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int> >v(n,vector<int> (m, 0));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>v[i][j];
		}
		cout<<solve(v)<<endl;
	}
}
