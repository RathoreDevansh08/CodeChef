#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;long int n;
cin>>t;
//scanf("%d",&t);
while(t--)
{
 cin>>n;
 //scanf("%ld",&n);
 long int a[n],b[n+1],f=0,k=0;
 std::map<long int,long int>mp;
 multimap<long int,long int>::iterator it,in;
 for(int i=0;i<n+1;i++)
 	b[i]=0;
 for(long int i=0;i<n;i++)
 {	
  cin>>a[i];
  //scanf("%ld",&a[i]);
  b[a[i]]+=1;
  if(b[a[i]]>=2)k=1;
 }
 if(k==0)
 {
  cout<<"Poor Chef\n";continue;
 }
 for(long int i=0;i<n;i++)
 {
  mp.insert(pair <long int,long int> (a[i], a[a[i]-1])); 
 }
 for(it=mp.begin();it!=mp.end();it++)
 {
  for(in=mp.begin();in!=it;in++)
  {
   if(in->second==it->second)
   {
    cout<<"Truly Happy\n";f=1;break;
   }
  }
  if(f==1)break;
 }	
  if(f==0)cout<<"Poor Chef\n";
}
return 0;
}
