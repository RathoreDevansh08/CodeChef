#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

string st;
int t,m,n,a,b,f=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>st;
		
		int j=1, k=0;n=st.length();
		vi dp;
		dp.pb(1);
		while(st[j])
		{
			if(st[j-1]==st[j]) dp[k]++;
			else k++, dp.pb(1);
			j++;
		}
		
		vi newdp = dp ;
		sort(dp.begin(), dp.end());
		
		m = dp.size();b=0;
		fr(i,0,m-1)
		b+=abs(newdp[i]-dp[i]);
		b=b/2;
		
		cout<<b<<"\n";
		
	}
	return 0;
}
