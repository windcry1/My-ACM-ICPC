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
string s2,s1;
vector<int> v[256];
int Hash[256];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int m,n;
	cin>>m;
	cin>>s1;
	for(int i=0;i<s1.size();i++)
		v[s1[i]].push_back(i+1);
	cin>>n;
	while(n--)
	{
		cin>>s2;
		for(int i='a';i<='z';i++)
			Hash[i]=0;
		for(int i=0;i<s2.size();i++)
			Hash[s2[i]]++;
		int MIN=-MMAX;
		for(int i='a';i<='z';i++)
			if(Hash[i]!=0)
				MIN=max(v[i][Hash[i]-1],MIN);
		cout<<MIN<<endl;
	}
 	return 0;
}

