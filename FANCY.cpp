#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
 int t,j=-1;
 cin>>t;t++;
 string m = " not ";
 while(t--)
 {
   string line;int flag=0;
   getline(cin,line);
   j++;
   int siz=line.size();
   if(j==0)continue; 
   if(siz<3) cout<<"regularly fancy\n";     
   else if(siz==3 && line[0]=='n' && line[1]=='o' && line[2]=='t') {cout<<"Real Fancy\n";} 
   else if (line.find(m) != string::npos) {cout<<"Real Fancy\n";}
   else if(line[0]=='n' && line[1]=='o' && line[2]=='t' && line[3]==' '){cout<<"Real Fancy\n";}
   else if(line[siz-4]==' ' && line[siz-3]=='n' && line[siz-2]=='o' && line[siz-1]=='t')
   {cout<<"Real Fancy\n";flag=1;}
   else cout<<"regularly fancy\n";
 }
 return 0;
}
