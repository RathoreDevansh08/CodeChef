#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,p1,p2,k;
cin>>t;
while(t--)
{
 cin>>p1>>p2>>k;
 if(((p1+p2)/k)%2!=0)cout<<"COOK\n";
 else cout<<"CHEF\n";
}
return 0;
}
