#include<iostream>
using namespace std;

int main()
{
long int t,n,k,cu=0,sum=0;
cin>>t;
while(t--)
{
sum=0;cu=0;
cin>>n>>k;
long int a[n];
for(int i=0;i<n;i++)
{
 cin>>a[i];
 if(a[i]-cu>k)
 {
  sum+=(a[i]-cu)/k;
  if((a[i]-cu)%k==0)sum-=1;
 }
 cu=a[i];
}
cout<<sum<<endl;
}
return 0;
}
