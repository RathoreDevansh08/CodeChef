#include<iostream>
#include <thread> 
#include <chrono>
using namespace std;

int main()
{
int x=3,y,z;
cout<<x<<"\n"<<flush;//<< flush;
//this_thread::sleep_for(chrono::seconds(1));
cin>>y;cout<<flush;
if(y==1)cout<<2<< flush;
else cout<<1<< flush;
return 0;
}
