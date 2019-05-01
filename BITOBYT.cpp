#include<iostream>
#include<math.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int t,n,c,d;
cin>>t;
while(t--)
{
 cin>>n;
 n-=1;
 d=n/26;
 n=n%26;
 if(n<2)printf("%lld 0 0\n",(long long int)pow(2,d));
 else if(n<10)printf("0 %lld 0\n",(long long int)pow(2,d));
 else if(n<26)printf("0 0 %lld\n",(long long int)pow(2,d));
}
return 0;
}
