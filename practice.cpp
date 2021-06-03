#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int sliding_max[n/k];
		deque<int>dq(k);
		int i;
		for(i=0;i<k;i++)
		{
			while(!dq.empty() && a[i]>=a[dq.back()])
			{
				dq.pop_back();
			}
			dq.push_back(i);
		}
		for(i=k;i<n;i++)
		{
			cout<<a[dq.front()]<<" ";
			while(!dq.empty() && dq.front()<=i-k)
			dq.pop_front();
			
			
			while(!dq.empty() && a[i]>=a[dq.back()])
			dq.pop_back();
			
			dq.push_back(i);
		}
		cout<<a[dq.front()];
		
		//O(n)
		//O(k)
	}
}
