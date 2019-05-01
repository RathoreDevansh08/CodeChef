#include<iostream>

using namespace std;
int main()
{
int t,n,k,a[30],b[30];
cin>>t;
a[1]=1;b[1]=2;
a[2]=1;b[2]=4;
/*a[3]=3;b[3]=8;
a[4]=5;b[4]=16;
a[5]=11;b[5]=32;*/
for(int i=3;i<26;i++)
{
 a[i]=a[i-2]*2+a[i-1];
 b[i]=b[i-1]*2;
}
while(t--)
{
 cin>>n;
 cout<<a[n]<<" "<<b[n]<<" ";
}
return 0;
}
