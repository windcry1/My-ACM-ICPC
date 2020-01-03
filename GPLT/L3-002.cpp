/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
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
#include<unordered_map>
#include<unordered_set>
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
	vector <int> pv;
	stack<int> v;
	string s;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s=="Pop")
		{
			if(v.empty())
				cout<<"Invalid"<<endl;
			else
			{
				cout<<v.top()<<endl;
				pv.erase(lower_bound(pv.begin(),pv.end(),v.top()));
				v.pop();
			}
		}
		if(s=="PeekMedian")
		{
			if(pv.empty())
				cout<<"Invalid"<<endl;
			else
				cout<<pv[(pv.size()+1)/2-1]<<endl;
		}
		if(s=="Push")
		{
			int t;
			cin>>t;
			v.push(t);
			pv.insert(lower_bound(pv.begin(),pv.end(),t),t);
		}
	}
 	return 0;
}

