#include<bits/stdc++.h>
using namespace std;

#define inf 1000000000
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(long long int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<ll> vi;

set<ll>s;
string st, ver;
ll t,m,n,a,b,f=0,r;

void prmFc(ll n)  
{  
    while(n%2==0)  
    {  
        //cout<<2<<" ";  
        s.insert(2);
        n/=2;  
    }  
  
    for(ll i=3; i<=sqrt(n); i=i+2)  
    {  
        ll h=0;
        while(n%i==0)  
        {   
            //cout << i << " ";
            if(!h) s.insert(i);  
            n = n/i;h=1;  
        }  
    }  
    if(n>2) s.insert(n);//cout<<n<<" ";  
}  
ll w1,w2,w3,w4,r1,r2,r3;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ver="Yes";
	cin>>t;cout<<flush;
	while(t-- && ver=="Yes")
	{
		s.clear();f=0;
	
		w1=435453;
		cout<<"1 "<<w1<<endl;
		cin>>r1;//w3=w1*w1-r1;
		/*if(!r1) 
		{
			f=1;
			cout<<"2 "<<3<<endl;
			cin>>ver;
			if(ver=="Yes") continue;
			else return 0;
		}
		else */if(r1==-1) return 0;
		/*else
		{
			while(w3%3==0)
				w3=w3/3;
		}*/
		
		w2=2423324;
		
		cout<<"1 "<<w2<<endl;
		cin>>r2;//w4=w2*w2-r2;
		/*if(!r2) 	
		{
			f=1;
			cout<<"2 "<<w2<<endl;
			cin>>ver;
			if(ver=="Yes") continue;
			else return 0;
		}
		else */if(r2==-1) return 0;
		/*else
		{
			while(w4%3==0)
				w4=w4/3;
			while(w4%37==0)
				w4=w4/37;	
			while(w4%3923==0)
				w4=w4/3923;
		}*/
		
		prmFc( __gcd( w1*w1-r1, w2*w2-r2 ) );
		
		set<ll>::iterator it;
		it=s.end();
		it--;
		while(it!=s.begin() && *it>1000000000) it--;
		cout<<"2 "<<*it<<endl;
		cin>>ver;
		if(ver=="Yes") continue;
		else return 0;
		/*
		if(s.size()>1)
		for(auto e: s)
		{
			if(w1*w1%e==r1 && w2*w2%e==r2)
			{
				cout<<"1 "<<e<<endl;
				cin>>r3;
				if(!r3) 
				{
					cout<<"2 "<<e<<endl;
					cin>>ver;f=1;
					if(ver=="Yes") break;
					else return 0;
				}
				else if(r3==-1) return 0; 
			}
		}
		else
		for(auto e: s)
		{
			if(w1*w1%e==r1 && w2*w2%e==r2)
			{
				cout<<"2 "<<e<<endl;
				cin>>ver;f=1;
				if(ver=="Yes") break;
				else return 0; 
			}
		}
		if(f==0) return 0;*/
	}
	return 0;
}
