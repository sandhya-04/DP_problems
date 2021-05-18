#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
string X;
string Y;
int find(int i,int j){
	if(X[i]=='\0' || Y[j]=='\0')
	return 0;
	
	if(dp[i][j]!=-1)
	return dp[i][j];
	
	if(X[i]==Y[j])
	return dp[i][j]=1+find(i+1,j+1);
	
	else
	return dp[i][j]=max(find(i,j+1),find(i+1,j));
}

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
			cin>>X;
		    Y  = "";
            Y = X;
            reverseStr(Y);
		    int p=find(0,0);
		    int n=X.length();
		    cout<<(n-p)<<endl;
	}
}
