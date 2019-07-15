#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

#define P2(n) n, n ^ 1, n ^ 1, n 
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n) 
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n) 
#define LOOK_UP P6(0), P6(1), P6(1), P6(0) 
unsigned int table[256] = { LOOK_UP };
int P(int num) 
{ 
	int max = 16;   
	while (max >= 8)
	{ 
        num = num ^ (num >> max); 
        max = max / 2; 
	} 
	return table[num & 0xff]; 
}

string st;
int t,m,n,a,b,f=0,q,x;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int pre[1000000];
	cin>>t;
	while(t--)
	{
		cin>>q;
		int ne=0, no=0;
		set<int>s;
		memset(pre, 0, sizeof pre);
		
		//q--;
		//cin>>x;
		//if(P(x)) no=1;
		//else ne=1;
		//s.insert(x);
		while(q--)
		{
			cin>>x;
			//s.insert(x);
			if(pre[x]==0)
			{
				s.insert(x);
				
				for(auto e:s)
				{
					if(e!=x)
					{
						b=e^x;
						if(!pre[b])
						{
							if(P(b)) no++;
							else ne++;
							pre[b]=1;
							s.insert(b);
						}
					}
				}
				
				if(P(x)) no++;
				else ne++;
			}
			pre[x]=1;
			
			cout<<ne<<" "<<no<<"\n";
		}
	}
	return 0;
}
