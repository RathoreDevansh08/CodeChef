#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

int t,m,n,a,b,f=0,r;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int rw[10001], cl[10001];
	
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		fr(i,0,n-1) rw[i]=1;
		fr(j,0,m-1) cl[j]=1;
		
		cin>>r;
		fr(i,0,r-1)
		{
			cin>>a>>b;
			rw[a-1]=0;
			cl[b-1]=0;
		}
		
		int cntrw=0, cntcl=0;
		fr(i,0,n-1) cntrw+=rw[i];
		fr(j,0,m-1) cntcl+=cl[j];
		
		cntrw*=cntcl;
		cntcl=__gcd(m*n, cntrw);
		
		if(cntrw) cout<<cntrw/cntcl<<" "<<m*n/cntcl<<"\n";
		else cout<<0<<"\n";
	}
	return 0;
}
