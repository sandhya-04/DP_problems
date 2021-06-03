//partition sum problem
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int a[1001];
int find(int i,int k){
	if(i>=0 || k<0)
	return 0;
	
	if(dp[i][k]!=-1)
	return dp[i][k];
	
	if(k==0)
	return dp[i][k]=1;
	
	if(k<a[i])
	return dp[i][k]=find(i+1,k);
	
	else
	return dp[i][k]= find(i+1,k) | find(i+1,k-a[i]);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int sum=0;
		for(int i=0;i<n;i++)
		sum+=a[i];
		
		if(sum%2==0)
		{
			if(find(0,sum))
			cout<<"partition is there"<<endl;
		}
		else
		{
			cout<<"No partition"<<endl;
		}
	}
}
