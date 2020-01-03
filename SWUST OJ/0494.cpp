/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 4:18:58 PM
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
	int T;
	cin>>T;
	while(T--)
	{
		string s;cin>>s;
		for(string::reverse_iterator i=s.rbegin();i!=(s.rend()-1);i++)
		{
			if(*i>=10+'0')
				*i-=10,*(i+1)+=1;
			if(*i>='5')
				*(i+1)+=1;
			*i='0';
		}
		if(!isdigit(*s.begin()))
		{
			*s.begin()-=10;
			s.insert(s.begin(),'1');
		}
		for(string::iterator i=s.begin();i!=s.end();i++)
		{
			cout<<*i;
		}
		cout<<endl;
	}
	return 0;
}

