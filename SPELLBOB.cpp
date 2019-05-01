#include<bits/stdc++.h>
using namespace std;

int main()
{
 int b,n,f=0,j;string s1,s2;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  b=0;
  cin>>s1;
  cin>>s2;
  if(b==1)continue;
  for(j=0;j<3;j++)
  {
   int a[3]={0};
   if(s1[j]=='o'||s2[j]=='o')
   {
    a[j]=1;
    for(int t=0;t<3;t++)
    {
     if(t!=j && (s1[t]=='b'||s2[t]=='b'))
      a[t]=1;
    }
    if(a[0]*a[1]*a[2]){cout<<"yes\n";break;}
   }
  }
  if(j==3)cout<<"no\n";
 }
 return 0;
}
