#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair< int, int> &a,const pair< int, int> &b)
{
 return (a.second < b.second);
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
  int p,s;
 cin>>p>>s;
  int *a,*b,c=0;vector<pair< int, int>>w;
 a = new  int[s];
 b = new  int[s];
 for( int i=1;i<=p;i++)
 {
  c=0;
  vector<pair< int, int>>v;
  for( int j=0;j<s;j++)
   cin>>a[j];   
  for( int j=0;j<s;j++)
   cin>>b[j];
  for( int j=0;j<s;j++)
   v.push_back(make_pair(a[j],b[j]));
   
  sort(v.begin(), v.end()); 
  
  for( int j=0;j<s-1;j++)
  if(v[j].second>v[j+1].second)
  c++;
  
  w.push_back(make_pair(c,i));
 }
  sort(w.begin(), w.end());
  
  for( int m=0;m<p;m++)
  cout<<w[m].second<<"\n";
  return 0;
}
