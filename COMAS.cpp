#include<iostream>
#include<thread>
using namespace std;

int main()
{
 int t,n,m;
 cin>>t;cout<<flush;
 while(t--)
 {
  int j,k,l,a[6],f,t,j2,k2,j3,k3,j4,k4;
  a[0]=1;a[1]=2;a[2]=3;a[3]=4;a[4]=5;
  cin>>n;cout<<flush;
  a[5]=n;
  m=n;f=a[4];
  while(m>6)
  {
   cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
   cin>>j>>k;cout<<flush;
   for(int i=0;i<5;i++){if(j==a[i])a[i]=++f;else if(k==a[i])a[i]=++f;}
   m-=2;
  }
  if(m==5)
  {
   for(int i=1;i<=n;i++)
   {
    if(i!=a[0] && i!=a[1] && i!=a[2] && i!=a[3] && i!=a[4]){a[5]=i;break;}
   }
  }
  
  cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
  cin>>j>>k;cout<<flush;
  for(int i=0;i<5;i++){if(k==a[i]){a[i]=a[5];a[5]=k;}}
  
  cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
  cin>>j2>>k2;cout<<flush;
  if(k2==j)
  {
   for(int i=0;i<5;i++)
   {if(a[i]!=j && a[i]!=j2 && a[i]!=k){a[5]=a[i];a[i]=k;break;}}
    cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
    cin>>j3>>k3;cout<<flush;
    if(j3==j2){cout<<"! "<<a[5]<<"\n"<<flush;}
    else
    {
     int a0,mk,i;
     for(i=0;i<5;i++)
     {if(a[i]!=j && a[i]!=j2 && a[i]!=k){a0=a[5];a[5]=a[i];a[i]=a0;break;}}
     for(int i1=i+1;i1<5;i1++)
     {if(a[i1]!=j && a[i1]!=j2 && a[i1]!=k){mk=a[i1];break;}}
     cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
     cin>>j4>>k4;cout<<flush;
     if(j4==j2){cout<<"! "<<a[5]<<"\n"<<flush;}
     else {cout<<"! "<<mk<<"\n"<<flush;}
    }
  }
  else
  {
   int a0,mk;
   for(int i=0;i<5;i++)
   {if(a[i]!=j && a[i]!=k2 && a[i]!=k){a[5]=a[i];a[i]=k;break;}}
   cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
   cin>>j3>>k3;cout<<flush;
   if(j3==j){cout<<"! "<<a[5]<<"\n"<<flush;}
   else
   {
    int i;
    for(i=0;i<5;i++)
    {if(a[i]!=j && a[i]!=k2 && a[i]!=k){a0=a[5];a[5]=a[i];a[i]=a0;break;}}
    for(int i1=i+1;i1<5;i1++)
    {if(a[i1]!=j && a[i1]!=k2 && a[i1]!=k){mk=a[i1];break;}}
    cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n"<<flush;
    cin>>j4>>k4;cout<<flush;
    if(j4==j){cout<<"! "<<a[5]<<"\n"<<flush;}
    else{cout<<"! "<<mk<<"\n"<<flush;}
   }
  }
 }
 return 0;
}
