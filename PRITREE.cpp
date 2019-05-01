#include<iostream>
using namespace std;

int prime(long int n)
{
 int f=1;
 for(long int i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   f=0;
   break;
  }
 }
 if(n==1)return 0;
return f;  
}

int main()
{
long int n,f=0,h=0,h1=0;
cin>>n;
long int a[n],b[n];
for(long int i=1;i<=n;i++)
{
 cin>>a[i-1];
 b[i-1]=prime(a[i-1]);
 if(b[i-1] && h1!=0)cout<<h1<<" "<<i<<"\n";
 else if(!b[i-1] && h!=0)
 { 
  cout<<h<<" "<<i<<"\n";
  h=i;
 }
 else if(!b[i-1] && h1==0)
 {
  h1=i;h=i;
  for(long int k=1;k<i;k++)
  {
   cout<<i<<" "<<k<<"\n";
  }  
 }
}
if(h==0)
for(long int y=1;y<n;y++)cout<<n<<" "<<y<<"\n";
return 0;
}
