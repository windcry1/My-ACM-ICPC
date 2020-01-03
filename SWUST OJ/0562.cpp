/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 10:02:56 PM
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
typedef pair<int,int> pii;
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
	int m;
	vector<int> s;
	cin>>m;
	s.push_back(m);
	for(int i=0;;i++)
	{
		int p=s[i];
		s.push_back(2*p+1);
		s.push_back(3*p+1);
		if(s.size()>=500)
		{
			int cnt=0,res=0;
			for(vector<int>::iterator j=s.begin();j!=s.end();j++)
			{
				++res;
				if(!cnt) cout<<*j;
				else cout<<"  "<<*j;
				cnt++;
				if(cnt==10) cout<<endl,cnt=0;
				if(res==500) break;
			}
			return 0;
		}
	}
	return 0;
}

