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
int t,m,n,a,b,f=0,x,y;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>m>>n>>x>>y;
		int dp[m][n];
		
		fr(i,0,m-1)
			fr(j,0,n-1)
				cin>>dp[i][j];
				
		a=dp[0][0];
		dp[0][0]=0;
		
		fr(i,1,n-1) dp[0][i]+=dp[0][i-1];
		fr(i,1,m-1) dp[i][0]+=dp[i-1][0];
		
		fr(i,1,x-1)
			fr(j,1,y-1)
				dp[i][j]+=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
				
		if(a>=dp[x-1][y-1]) cout<<"Escape\n";
		else cout<<"Died\n";
	}
	return 0;
}
