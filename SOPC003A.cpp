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
		cin>>n;
		int ar[n];
		
		fr(i,0,n-1) cin>>ar[i];
		
		sort(ar, ar+n);
		
		b=0;
		fr(i,1,n-1)
		{
			for(int j=i-1; j>=0; j--)
			{
				if((double)ar[j] >= (double)ar[i]/2) b++;
				else break;
			}
		}
		
		cout<<b<<"\n";
	}
	return 0;
}
