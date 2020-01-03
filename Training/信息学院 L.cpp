//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
int a[100100];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	int n;
	while(cin>>n&&n)
	{
		int now=0,s=1,e,st=1;
		int MAX=-MMAX;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			now+=a[i];
			if(now>MAX)
			{
				st=s;
				e=i;
				MAX=now;
			}
			if(now<0)
			{
				now=0;
				s=i+1;
			}
		}
		//cout<<"Case "<<++times<<":"<<endl;
		if(MAX>=0)
			cout<<MAX<<" "<<a[st]<<" "<<a[e]<<endl;
		else cout<<"0"<<" "<<a[1]<<" "<<a[n]<<endl;
	}
 	return 0;
}

