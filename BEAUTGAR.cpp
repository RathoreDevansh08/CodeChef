#include<iostream>
using namespace std;

int main()
{
long int t;
char d; 
char li[100005];
fgets(li,sizeof li,stdin);
sscanf(li,"%ld",&t);
while(t--)
{
 char line[100005],a[100005];
 fgets(line,sizeof line,stdin);
  sscanf(line,"%s",a);

 long int i=1,flag=2,c=0,M=0,N=0;
 if(a[0]=='R')N++;
 else M++;
 while(a[i])
 {
  if(a[i]=='G')M++;
  else if(a[i]=='R')N++;
  if(a[i]==a[i-1] && c==0){c++;d=a[i-1];}
  else if(a[i]==a[i-1])
  {
   c++;
   if(d==a[i-1]){flag=0;break;}
   else d=a[i-1];
  }
  if(c>2){flag=0;break;}
  i++;
 }
 if(c==0 && a[0]==a[i-1])flag=0;
 if(c==1 && a[0]!=a[i-1])flag=0;
 else if(c==1 && a[0]==a[i-1] && d==a[0])flag=0;
 if(c==2 && a[0]==a[i-1])flag=0;
 if(M>=N && M-N>1)flag=0;
 else if(N>=M && N-M>1)flag=0;
 if(flag==0)cout<<"no\n";
 else cout<<"yes\n";
}
return 0;
}
