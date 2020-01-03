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
map<string,bool> ma; 
int main()
{
// 	ios::sync_with_stdio(false);
//	cin.tie(0);
//    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,times=0;
	cin>>T;
	while(T--)
	{
		ma.clear();
		int n;
		cin>>n;
		string s1,s2,s3,t;
		cin>>s1>>s2>>s3;
		int i=0;
		while(i!=n)
		{
			t+=s2[i];
			t+=s1[i++];
		}
		int cnt=0,f=1;
		while(!ma[t])
		{
			cnt++;
			ma[t]=true;
			if(s3==t)
			{
				cout<<++times<<" "<<cnt<<endl;
				f=0;
				break;
			}
			s1=t.substr(0,n);
			s2=t.substr(n,n);
			i=0;
			t="";
			while(i!=n)
			{
				t+=s2[i];
				t+=s1[i++];
			}
		}
		if(f)
			cout<<++times<<" -1"<<endl;
	}
 	return 0;
}

