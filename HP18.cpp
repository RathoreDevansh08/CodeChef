#include<iostream>
using namespace std;

int main()
{
	long int t,n,a,b;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>a>>b;
		long int ar[n],ia=0,ib=0,iab=0;
		for(long int i=0;i<n;i++)
		{
			cin>>ar[i];
			if(ar[i]%a==0 && ar[i]%b==0)iab++;
			else if(ar[i]%a==0)ia++;
			else if(ar[i]%b==0)ib++;
		}
		
		if(iab==0)
		{
			if(ia<=ib)cout<<"ALICE\n";
			else cout<<"BOB\n";
		}
		else
		{
			if(ia<ib)cout<<"ALICE\n";
			else cout<<"BOB\n";
		}
	}
	return 0;
}
