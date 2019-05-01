#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

typedef struct digsum
{
 long long int index,value,visited;
}digsum;

long long int le(long long int i)
{return 2*i+1;}
long long int ri(long long int i)
{return 2*i+2;}

long long int count=0;

long long int sd(long long int k)
{
 long long int sum=0;
 while (k!= 0)
 {
  sum = sum + k % 10;
  k = k / 10;
 }
 return sum;   
}

void recursion(long long int arr[], long long int n,long long int d,long long int i)
{
 if(i>=5000)
  return;
 arr[le(i)]=sd(n);
 arr[ri(i)]=n+d;
 if(sd(n)%10!=sd(n))
 recursion(arr, sd(n), d, le(i));

 recursion(arr, n+d,d, ri(i));

 return;
}


long long int DS(long long int k, digsum* b)
{
 long long int sum =0;

 while (k!= 0)
 {
  sum = sum + k % 10;
  k = k / 10;
 }
 
 if(sum%10==sum)
  return sum;
 else
  return DS(sum, b);
}

long long int findindex(long long int arr[],long long int key)
{
 for(long int i=0; i<5000; i++)
 {if(arr[i]==key) return i+1;}
}

int main()
{
 long int t;
 long long int n, d;
 cin>>t;
 
 while(t--)
  {
   digsum* b = (digsum*)malloc(1001*sizeof(digsum));
   long long int arr[10000]={-1},min=10000;
   count=0;
   cin>>n>>d;
   arr[0]=n;
   recursion(arr,n,d,0);
		
   for(int i=0;i<1000;i++)
   {
    b[i].visited=0;
   }
   		
   for(long int i=0; i<1000; i++)
   {
    b[i].value=DS(n+i*d, b);
    b[i].visited=1;
    if(min>b[i].value) min=b[i].value;
    b[i].index=i;
   }
   
   for(int i=0;i<1000;i++)
   {
    for(int j=i+1;j<1000;j++)
    {
     if(b[i].value==b[j].value)
     {
      if(b[i].index>b[j].index)
      {
       int t=b[i].value;b[i].value=b[j].value;b[j].value=t;
       t=b[i].index;b[i].index=b[j].index;b[j].index=t;
      }
     }
     else if(b[i].value>b[j].value)
     {
      int t=b[i].value;b[i].value=b[j].value;b[j].value=t;
       t=b[i].index;b[i].index=b[j].index;b[j].index=t;
     }
    }
   }
	
   min=b[0].value;
		
   long long int m = findindex(arr,min);
   //cout<<m<<"-->";
   while(m>0)
   {
    m/=2;count++;
   }
   count--;
   cout<<min<<" "<<count<<"\n";
  }
return 0;
}
