#include<iostream>

using namespace std;

int main()
{
	int t, n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a=0,b=0, sf=0, sa=0, k;
		
		while(n--){
		cin>>k>>a>>b;
		
		if(a==b) sf=a, sa=b, cout<<"YES\n";
		else if(k==1) sf=a, sa=b, cout<<"YES\n";
		else
		{
			if(a>=sf && b>=sa && a>=sa && b>=sf) cout<<"NO\n";
			else 
			{
				if(a>=sf && b>=sa && min(a,b)<max(sa,sf)) sf=a, sa=b, cout<<"YES\n";
				else if(a>=sa && b>=sf && min(a,b)<max(sa,sf)) sa=a, sf=b, cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
		}
	}
	return 0;
}
