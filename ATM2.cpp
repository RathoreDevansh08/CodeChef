#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,p,k;
cin>>t;
while(t--)
{
 cin>>n>>k;
 vector<int>a;
 for(int i=0;i<n;i++)
 {
  cin>>p;
  if(p<=k)
  {
   cout<<1;
   k-=p;
  }
  else
  {
   cout<<0;
  }
 }
 cout<<"\n";
}
return 0;
}
