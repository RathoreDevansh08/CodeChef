#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("Ofast")

#include<iostream>
#include<vector>
using namespace std;

#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

ll t,m,n,a,b,k,f=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll dp[n+5], wet[n+5];
		
		fr(i,0,n) wet[i]=0;
		fr(i,0,k-1) {cin>>a; wet[a]=1;}
		
		dp[0]=1;
		if(!wet[1]) dp[1]=1;
		else dp[1]=0;
		if(!wet[2]) dp[2]=1+dp[1];
		else dp[2]=0;
		
		fr(i,3,n)
		{
			if(!wet[i]) dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%inf ;
			else dp[i] = 0;
		}
		
		cout<<dp[n]<<"\n";
		
	}
	
	return 0;
}
