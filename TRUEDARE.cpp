#include<iostream>
using namespace std;

#define inf 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long int t,t1,d1,t2,d2;
cin>>t;
while(t--)
{
 int flag=0;
 cin>>t1;
 long int a[t1]; 
 for(int i=0;i<t1;i++)cin>>a[i];
 cin>>d1;
 long int b[d1]; 
 for(int i=0;i<d1;i++)cin>>b[i];
 cin>>t2;
 long int c[t2]; 
 for(int i=0;i<t2;i++)cin>>c[i];
 cin>>d2;
 long int d[d2]; 
 for(int i=0;i<d2;i++)cin>>d[i];
 for(int i=0;i<t2;i++)
 {
  flag=0;
  for(int j=0;j<t1;j++)
  {
   if(a[j]==c[i]){flag=1;break;}
  }
  if(flag==0)break;
 }
 if(flag==0){cout<<"no\n";continue;}
 for(int i=0;i<d2;i++)
 {
  flag=0;
  for(int j=0;j<d1;j++)
  {
   if(b[j]==d[i]){flag=1;break;}
  }
  if(flag==0)break;
 }
 if(flag==0){cout<<"no\n";continue;}
 cout<<"yes\n";
}
return 0;
}
