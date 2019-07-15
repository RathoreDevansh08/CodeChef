#include<bits/stdc++.h>
using namespace std;

#define inf 10000000000000
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(long long int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<ll> vi;

string st;
ll t,m,n,a,b,e,f=0;

ll dp(ll sz, vi v)
{
	ll dps[sz][sz], dpp[sz][sz];
	
	fr(i,0,sz-1)
	{
		dps[i][i]=v[i];
	}
	
	fr(i,0,sz-2)
	{
		dps[i][i+1]=v[i]+v[i+1];
		dpp[i][i+1]=dps[i][i+1];
	}
	//dps[sz-1][0]=dpp[sz-1][0]=v[0]+v[sz-1];
	
	fr(i,2,sz-1)
	{
		fr(j,0,sz-i-1)
		{
			ll pen=LLONG_MAX, sm=LLONG_MAX;
			fr(k,0,i-1)
			{
				m = dpp[j][j+k]+dpp[j+k+1][j+i];
				m+= dps[j][j+k]+dps[j+k+1][j+i];
				pen=min(pen,m);
				
				if(pen==m)
				{
					//pen=m;
					//if(sm>dps[j][j+k]+dps[j+k+1][j+i]) 
					sm=dps[j][j+k]+dps[j+k+1][j+i];
				}
			}
			dpp[j][j+i]=pen;dps[j][j+i]=sm;
		}
	}
	
	sz=sz/2;
	m=LLONG_MAX;
	fr(i,0,sz-1)
	{
		m=min(m,dpp[i][i+sz-1]);
	}
	return m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vi a(2*n);
		fr(i,0,n-1) {cin>>a[i];a[i+n]=a[i];}
		//a[n]=a[0];
		n*=2;
		cout<<dp(n,a)<<"\n";
	}
	return 0;
}
