#include<iostream>

using namespace std;

unsigned long long int w;
int dp(int f,unsigned long long int m,unsigned long long int n)
{
	if(n==0 || m==0)return 1-f;
	if(m%n==0 || n%m==0)return f; 
	
	if(m>n)
	{
		w=m%n;
		if(m==w+n)return dp(1-f,w,n);
		else if(n%w==0 && m>w+n)return dp(f,w,n);
		else
		{
			if(f){return max(dp(f,w,n),dp(1-f,w,n));}
			else {return min(dp(f,w,n),dp(1-f,w,n));}
		}
	}
	else
	{
		w=n%m;
		if(n==w+m)return dp(1-f,m,w);
		else if(m%w==0 && n>w+m)return dp(f,m,w);
		else
		{
			if(f) return max(dp(f,m,w),dp(1-f,m,w));
			else return min(dp(f,m,w),dp(1-f,m,w));
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,f;
	unsigned long long int n,m;
	
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		f=0;
		f=dp(f,m,n);
		
		if(f==0) cout<<"Ari\n";
		else cout<<"Rich\n";
	} 
	return 0;
}
