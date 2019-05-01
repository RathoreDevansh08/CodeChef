#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int t,n,p,a[1000001],st,k;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		long long int count;
		if(n>=3)
		{
			st=(n+2)/2;
			k=3*ceil((float)(n-3)/2)+9;
			count = st*st + (p-n)*k + 3*(p-n)*(p-n-1) ;
		}
		else
		{
			count = p*p*p;
		}
		cout<<count<<"\n";
	}
	return 0;
}
