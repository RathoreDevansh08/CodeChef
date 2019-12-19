/* 
#include<bits/stdc++.h>
using namespace std;

#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;i++) 
typedef long long int ll;
typedef vector<int> vi;

string st;
int t,m,n,a,b,f=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<pair<double,int>, int> num;
		
		int c=1;
		fr(i,0,n-1)
		{
			cin>>a;
			num[{(double)a, c}] = 1;
			num[{(double)a/2, -1*c}] = 0;
			c++;
		}
		
		c=0;
		for(auto e: num)
		{
			if(e.first.second<0) num[e.first] = c;
			else num[e.first] = c++;
		}
		
		b=0;
		for(auto e:num)
		{
			if(e.first.second<0)
			{
				b += num[{e.first.first * 2.00, e.first.second * (-1)}] - num[e.first];
			}
		}
	
		cout<<b<<"\n";
	}
	return 0;
}
*/
#include<iostream>
#include<algorithm>

using namespace std;

int n, a[100005];

void read()
{
    cin>>n;
    for(int i = 0;i < n;i++)
        cin>>a[i];

    sort(a, a + n);
}

int b_search(double x, int high)
{
    int low = 0, mid;

    if(a[0] >= x)
        return 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(mid > 0 && a[mid] >= x && a[mid - 1] < x)
            return mid;
        else if(mid > 0 && a[mid - 1] >= x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

void solve()
{
    long long ans = 0;
    int idx;
    for(int i = 1;i < n;i++)
    {
        idx = b_search((double)a[i] / 2.0, i - 1);
        if(idx == -1)
            continue;
        ans += (i - idx);
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        read();
        solve();
    }
    return 0;
}




