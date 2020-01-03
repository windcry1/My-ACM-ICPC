/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 9:07:17 PM
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
unordered_map<string,string> ma;
void debug()
{
	cout<<"debug"<<endl;
	for(auto i:ma)
		cout<<i.first<<" "<<i.second<<endl;
	cout<<"end debug"<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	cin.ignore();
	while(true)
	{
		getline(cin,s);
		if(s=="END")
			break;
		istringstream ss(s);
		string s1,s2;
		ss>>s1>>s2;
		ma.emplace(s2,s1);
	}
	cin>>s;
	cin.ignore();
	//debug();
	while(true)
	{
		getline(cin,s);
		if(s=="END")
			break;
		char c;
		string temp="";
		unsigned i=0;
		while(c=s[i++],i!=s.size()+1)
		{
			if(isalpha(c))
				temp+=c;
			else
			{
				if(ma.find(temp)!=ma.end()) cout<<ma[temp];
				else cout<<temp;
				cout<<c;
				temp="";
			}
		}
		if(ma.find(temp)!=ma.end()) cout<<ma[temp]<<endl;
		else cout<<temp<<endl;
	}
 	return 0;
}

