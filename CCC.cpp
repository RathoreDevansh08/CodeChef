#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(long int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<long int> vi;

string st;
long int z,t,m,n,a,b,f=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n>>z;
		vi ar(n);
		
		fr(i,0,n-1) cin>>ar[i];
		sort(ar.begin(),ar.end());
		
		long int ans=min(n*ar[0],ar[n-1]);
		
		fr(i,0,n-1)
		{
			ans=min(ans,ar[i]*(n-i));
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
