#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

int t,m,n,a,b,f=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		set<int>s;
		map<int,int>mp;
		cin>>n;
		fr(i,0,n-1)
		{
			cin>>a;
			s.insert(a);
			mp[a]++;
		}
			
		if(s.size()>2 || n==1) cout<<"-1\n";
		else if (s.size()==1)
		{
			if(a==0) cout<<n<<"\n";
			else if(a==n-1) cout<<"0\n";
			else cout<<"-1\n";
		}
		else
		{
			int ar[2], i=0;
			for(auto e:s) ar[i++]=e;
			
			if(ar[1]==ar[0]+1 && mp[ar[0]]==ar[1]) cout<<n-ar[1]<<"\n";
			else cout<<"-1\n";
		}
	}
	
	return 0;
}
