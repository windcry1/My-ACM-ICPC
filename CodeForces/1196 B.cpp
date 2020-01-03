/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/24/2019 10:43:24 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll a[200010],sum[200010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int q;
	cin>>q;
	while(q--)
	{
		int k,n;
		cin>>n>>k;
		for(auto i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i]%=2;
		}
		vector<ll> v;
		int cnt=0;
		for(auto i=1;i<=n;i++)
			if(a[i]==1)
				cnt++,v.push_back(i);
		if(cnt<k||cnt%2!=k%2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			cout<<"YES"<<endl;
			vector<ll> temp;
			cnt=k;
			for(auto i=v.rbegin();i!=v.rend();i++)
			{
				temp.push_back(*i);
				cnt--;
				if(!cnt) break;
			}
			sort(temp.begin(),temp.end());
			for(auto i=temp.begin();i!=temp.end();i++)
				if(i!=temp.end()-1)
					cout<<*i<<" ";
				else cout<<n<<endl;
		}
	}
 	return 0;
}

