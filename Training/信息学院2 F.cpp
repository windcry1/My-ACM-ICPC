/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/20/2019 9:31:55 PM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		vector<int> v;
		if(n==1)
		{
			cout<<1<<endl;
			continue;
		}
		while(true)
		{
			int f=0;
			for(int i=9;i>=2;i--)
			{
				if(n%i==0)
				{
					v.push_back(i);
					f=1;
					n/=i;
					break;
				} 
			}
			if(!f)
				break;
		}
		sort(v.begin(),v.end());
		if(n==1)
			for(auto i:v)
				cout<<i;
		else cout<<-1;
		cout<<endl;
	}
 	return 0;
}

