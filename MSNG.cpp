#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>
using namespace std;

#define inf 1000000000000
#define pb push_back
typedef long long int ll;
typedef vector<int> vi;

int t,m,n,a,b,f=0;
string no;
map<ll, int>cnt;

void solve()
{
	reverse(no.begin(), no.end());
	set<ll>s;
	//cout<<no<<"\n";
	for(int bs=2;bs<=36;bs++)
	{
		ll te=0, bs10=0, abs=1;
		while(no[te])
		{
			if(abs>inf || abs<0)break;
			if(isalpha(no[te]))
			{
				m=((int)(no[te]-'A')+10)*abs;
				if(m>inf || m<0) break;
				bs10+=m;
			}
			else
			{
				m=((int) no[te] - '0')*abs;
				if(m>inf || m<0) break;
				bs10+=m;
			}
			te++;
			abs*=bs;
		}
		if(te==no.length()) s.insert(bs10);
	}
	
	for(auto e:s)
	{
		cnt[e]+=1;
	}
}

void solvebs(ll bs)
{
	reverse(no.begin(), no.end());
	
	ll te=0, bs10=0, abs=1;
	while(no[te])
	{
		if(abs>inf || abs<0)break;
		if(isalpha(no[te]))
		{
			m=((int)(no[te]-'A')+10)*abs;
			if(m>inf || m<0) break;
			bs10+=m;
		}
		else
		{
			m=(no[te]-'0')*abs;
			if(m>inf || m<0) break;
			bs10+=m;
		}
		te++;
		abs*=bs;
	}
	if(te==no.length()) cnt[bs10]+=1;
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll base[n];
		cnt.clear();

		for(int i=0;i<=n-1;i++)
		{
			cin>>base[i]>>no;
			//cout<<no<<"--->\n";
			if(base[i]==-1) solve();
			else
			{
				solvebs(base[i]);
			}
		}
		
		
		for(auto e: cnt)
		{
			if(e.second==n){cout<<e.first<<"\n";}
		}
	}	

	return 0;
}

