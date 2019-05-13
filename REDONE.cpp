#include<iostream>

using namespace std;

#define inf 1000000007

unsigned long long a[1000010];
void fact() 
{  
    unsigned long long f = 1; 
    for(int i = 1; i <= 1000002; i++) {f = (f*i) % inf; a[i]=f;}
    return; 
} 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n;
	cin>>t;
	
	fact();
	while(t--)
	{
		cin>>n;
		unsigned long long z=a[n];
		cout<< ((n*z)%inf + (z-1))%inf<<"\n";
	}
	
	return 0;
}
