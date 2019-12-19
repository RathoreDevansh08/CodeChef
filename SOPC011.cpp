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
ll t,m,n,a,b,f=0;
ll ar[10005], dpa[10005], par[10005];

ll dp(ll j, int c)
{
	if(j>=n) return 0;
	if(c==2 && j!=0)
	{
		par[j]=j-1;                                //USE THE ARRAY ALSO ;>
		return dp(j+1, 0);
	}
	
	if(j!=(n-1))
	return max(dp(j+1, 1) + ar[j], dp(j+1, 2) + ar[j]*ar[j+1]);
	else return dp(j+1, 1) + ar[j];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		fr(i,0,n-1) cin>>ar[i], par[i]=i;
		
		cout<<dp(0,0)<<"\n";
	}
	return 0;
}
