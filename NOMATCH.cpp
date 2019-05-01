#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 long int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  long int a[n],sum=0;
  for(long int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  for(long int j=0;j<n/2;j++)sum=sum+(a[n-j-1]-a[j]);
  cout<<sum<<"\n";
 }
 return 0;
}
