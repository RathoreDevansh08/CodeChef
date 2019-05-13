#include<iostream>
#include<cstdio>
#include<set>
#include<iterator>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	long int n,t,a,b,k1,k2,l1,l2;
	double f,f0,d1,d2;
	scanf("%li",&t);
	while(t--)
	{
		cin>>n;
		set<long int>g;
		set<long int>h;
		set<long int>::iterator it1,it2;
		
		for(int i=0;i<n;i++)
		{
			scanf("%li %li",&a,&b);
			g.insert(a+b);h.insert(a-b);
		}
		
		if(g.size()!=n || h.size()!=n){printf("0\n");continue;}
		
		it1=g.begin();it2=h.begin();
		f=10000000000.000000;
		for(int i=0;i<n-1;i++)
		{
			k1=*it1;k2=*it2;
			it1++;it2++;
			l1=*it1;l2=*it2;
			
			d1=(double)(l1-k1);d2=(double)(l2-k2);
			f0=min((double)(d1)/2,(double)(d2)/2);
			
			if(f0==0)break;
			f=min(f,f0);
		}
		if(f0==0) printf("0\n");
		else printf("%0.6f\n",f);
	}	
	return 0;
}
