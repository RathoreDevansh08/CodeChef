#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

string st;
int t,m,n,a,b,d,j,f=0;
int di, md;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vi pw(n-1);
		fr(i,0,n-2) cin>>pw[i];
		cin>>f;
		
		md=INT_MAX;di=0;
		fr(c,0,n-1)
		{
			vi v=pw;
			v.insert(v.begin()+c,-1);
			
			b=n;d=0;j=0;
			while(b!=2)
			{
				if(v[j]<0) j++;
				else 
				{
					int u=j+1;
					while(u<n)
					{
						if(v[u]!=-2) break;
						u++;
					}
					if(u==n)
					{
						u=0;
						while(u<j)
						{
							if(v[u]!=-2) break;
							u++;
						}
					}
					
					if(v[u]==-1) d+=v[j];
					else {v[u]=-2;b--;}
					
					j=u+1;
				} 
				if(j>n-1) j=0;
			}
			//cout<<d<<"-->";
			fr(i,0,n-1)
			{
				if(v[i]>0) {b=v[i];break;}
			}
			if(b<=f) 
			{
				//cout<<d<<"-->"<<f;
				d+=f;
				if(md>d)
				{
					md=d;di=c;
				}
			} 
		}
		
		if(md==INT_MAX) cout<<"impossible\n";
		else
		{
			cout<<"possible\n";cout<<di+1<<" "<<md<<"\n";
		}
	}
	return 0;
}
