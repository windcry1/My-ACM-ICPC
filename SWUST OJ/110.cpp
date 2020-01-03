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
 	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	getchar();
	for(int k=1;k<=T;k++)
	{
		string s1,s2;
		getline(cin,s1);
		cin>>s2;
		getchar();
		for(int i=0;i<s1.length();i++)
		{
			if(isupper(s1[i]))
				s1[i]=s2[s1[i]-'A'];
		}
		cout<<k<<" "<<s1<<endl;
	}
 	return 0;
}

