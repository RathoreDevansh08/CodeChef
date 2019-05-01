#include<iostream>
#include <thread> 
using namespace std;

int main()
{
long int N,c1,noc,fl=0,soec,j1,j2,j3,j4,inp=-3,c;
cin>>N>>c1;cout<<flush;
//if(N>1000)
//{
 noc=150;soec=1000;j1=0;
 while(inp!=1 && inp!=-1)
 {
  j1++;
  c=soec*(j1);
  if(c>N){fl=1;break;}
  cout<<1<<" "<<c<<"\n"<<flush;
  cin>>inp;cout<<flush;
 }
 if(fl==0)cout<<2<<"\n"<<flush;
 j1--;
 
 fl=0;noc=7;soec=150;j2=0;inp=-3;
 while(inp!=1 && inp!=-1)
 {
  j2++;
  c=j1*1000+soec*j2;
  if(c>N){fl=1;break;}
  cout<<1<<" "<<c<<"\n"<<flush;
  cin>>inp;cout<<flush;
 }
 if(fl==0)cout<<2<<"\n"<<flush;
 j2--;
 
 fl=0;noc=22;soec=7;j3=0;inp=-3;
 while(inp!=1 && inp!=-1)
 {
  j3++;
  c=j1*1000+j2*150+soec*j3;
  if(c>N){fl=1;break;}
  cout<<1<<" "<<c<<"\n"<<flush;
  cin>>inp;cout<<flush;
 }
 if(fl==0)cout<<2<<"\n"<<flush;
 j3--;
 
 fl=0;noc=7;soec=1;j4=0;inp=-3;
 while(inp!=1 && inp!=-1)
 {
  j4++;
  c=j1*1000+j2*150+j3*7+j4*soec;
  if(c>N){fl=1;break;}
  cout<<1<<" "<<c<<"\n"<<flush;
  cin>>inp;cout<<flush;
 }
 if(fl==0)cout<<2<<"\n"<<flush;
 cout<<3<<" "<<j1*1000+j2*150+j3*7+j4<<"\n"<<flush;
//}
//else
//{
 
//}
return 0;
}
