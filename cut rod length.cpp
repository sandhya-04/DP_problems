/*-----------cut rod length-------*/
#include<bits/stdc++.h>
using namespace std;

int find(int a[],int n)
{
	int ma=0;
	if(n<=0)
	return 0;
	for(int i=0;i<n;i++)
	ma=max(ma,a[i]+find(a,n-i-1));
	return ma;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<find(a,n)<<endl;
	}
}
/*---------end of this code--------*/
