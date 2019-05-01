#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int a,c=0,t,b;
 cin>>t;
 for(long int i=0;i<t;i++)
 {
  cin>>a;
  b=(int)log2(a);
  long int min=pow(2,b+1)+1-a;
  for(int j=0;j<b;j++)
  {
   if(abs(pow(2,b)+pow(2,j)-a)<min)
   min=abs(pow(2,b)+pow(2,j)-a);
  }
  cout<<min<<"\n";
 }
 return 0;
}
