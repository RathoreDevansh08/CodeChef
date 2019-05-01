#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	long int a[n],b[m],sz=0,high=-1000000001,low=1000000001,hi=0,li=0;
	
	for(int i=0;i<n;i++){cin>>a[i];if(a[i]>high){high=a[i];hi=i;}}
	for(int j=0;j<m;j++){cin>>b[j];if(b[j]<low){low=b[j];li=j;}}
	
	for(int i=0;i<n;i++)cout<<i<<" "<<li<<"\n";
	for(int j=0;j<m;j++)if(j!=li)cout<<hi<<" "<<j<<"\n";
	
	return 0;
}
