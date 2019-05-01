#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
 cin>>n;
 long int a1[n]={0},a[n],c=0;
 
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  if(a[i]<=n && a[i]>=1 && a1[a[i]-1]==0)
  {
   a1[a[i]-1]=1;
   c++;
  }
 }
 cout<<n-c<<"\n";
}
return 0;
}
