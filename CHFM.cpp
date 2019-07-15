#include<iostream>
#include<vector>
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
		cin>>n;f=0;
		long int sm=0, avg, a[n];
		fr(i,0,n-1)
		{
			cin>>a[i];
			sm+=a[i];
		}
		
		if(sm%n==0)
		{
			avg=sm/n;
			fr(i,0,n-1)
			{
				if(a[i]==avg){f=i+1;break;}
			}
		}
		
		if(f) cout<<f<<"\n";
		else cout<<"Impossible\n";
	}
	return 0;
}
