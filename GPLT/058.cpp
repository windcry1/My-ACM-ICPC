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
	string s;
	getline(cin,s);
	s+=" ";
	int flag=0,cnt;
	string::iterator st;
	for(auto i=s.begin();i!=s.end();i++)
	{
		if(*i=='6'&&!flag)
		{
			flag=1;
			cnt=1;
			st=i;
		}
		else if(*i=='6'&&flag)
			cnt++;
		else if(*i!='6'&&flag)
		{
			flag=0;
			if(cnt>3&&cnt<=9)
				s.replace(st,i,"9");
			if(cnt>9)
				s.replace(st,i,"27");
			i-=cnt;
		}
	}
	s.pop_back();
	cout<<s<<endl;
 	return 0;
}

