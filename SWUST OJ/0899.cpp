/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/8/2019 11:57:05 PM
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
	int n,times=0;
	while(cin>>n)
	{
		int flag[11]={0},t;
		for(int i=0;i<n;i++)
			cin>>t,++flag[t];
		int MAX=*max_element(flag,flag+10);
		cout<<"Case "<<++times<<":"<<endl;
		for(int i=0;i<10;i++) cout<<".";
		cout<<endl;
		for(int i=MAX;i>=1;i--)
		{
			for(int j=0;j<10;j++)
			{
				if(flag[j]>=i) cout<<"X";
				else cout<<".";
			}
			cout<<endl;
		}
	}
	return 0;
}

