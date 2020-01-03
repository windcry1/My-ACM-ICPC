//Author:LanceYu
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	set<string> q;
	string s;
	while(cin>>s)
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for(int i=0;i<s.length();i++)
			if(!isalpha(s[i]))
				s[i]=' ';
		istringstream iss(s);
		while(iss>>s)
		{
			if(s!="")
				q.insert(s);
		}
	}
	set<string>::iterator it;
    for(it=q.begin();it!=q.end ();it++)
        cout<<*it<<endl;
 	return 0;
}

