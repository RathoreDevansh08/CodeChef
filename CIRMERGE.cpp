#include<bits/stdc++.h>
using namespace std;

#define inf 10000000000000
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(long int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<long int> vi;

string st;
long int t,m,n,a,b,e,f=0;
map<pair<long int,vi>,long int>mem;

long int dp(long int sz, vi v)
{
	if(sz==2) return v[0]+v[1];
	
	if(!mem[mp(sz,v)]){
	
	long int mn=inf, mi=inf, mic=1;		
	multiset<long int>s,mins;
	
	mi=v[0]+v[sz-1];
	mins.insert(sz-1);
	fr(i,0,sz-2)
	{ 
		//s.insert(v[i]+v[i+1]); 
		if(mi>(v[i]+v[i+1]))
		{
			mi=v[i]+v[i+1];
			//mii=i;
			mins.clear();
			mins.insert(i);
		}
		else if(mi==(v[i]+v[i+1]))
		{
			mins.insert(i);
		}
	}
	
	for(auto eli:mins)
	{
		vi v2=v;
		if(eli==(sz-1))
		{
			e=v[eli];b=v[0];
			v2[0]=e+b;v2.erase(v2.begin()+eli);
			mn=min(mn,b+e+dp(sz-1,v2));
			//v.insert(v.begin()+i,e);v[0]=b;
		}
		else
		{
			e=v[eli];b=v[eli+1];
			v2[eli]=e+b;v2.erase(v2.begin()+eli+1);
			mn=min(mn,b+e+dp(sz-1,v2));
			//v[i]=e;v.insert(v.begin()+i+1,b);//v[i+1]=b;
		}
	}
	
	mem[mp(sz,v)]=mn;
	}
	//cout<<mn<<"-";
	return mem[mp(sz,v)];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vi a(n);
		fr(i,0,n-1) cin>>a[i];
		//a[n]=a[0];
		
		cout<<dp(n,a)<<"\n";
	}
	return 0;
}
