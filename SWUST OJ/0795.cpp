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
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<n;
		int cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
				cnt++;
		cout<<" "<<cnt;
		cnt=0;
		for(int i=0;i<s.length()-2;i++)
			if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
				cnt++;
		cout<<" "<<cnt;
		cout<<endl;
	}
 	return 0;
}

