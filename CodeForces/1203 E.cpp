/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/13/2019 11:05:56 PM
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
int flag[200010],temp[200010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		++flag[t];
	}
	for(int i=1;i<=150001;i++)
	{
		if(flag[i])
		{
			if(i!=1&&!(flag[i-1]+temp[i-1]))
			{
				temp[i-1]=1;
				flag[i]--;
			}
		}
		if(flag[i]+temp[i]>=2)
		{
			temp[i+1]+=1;
			flag[i]--;
		}
	}
	int cnt=0;
	for(int i=1;i<=150001;i++)
		if(flag[i]+temp[i])
			++cnt; 
	cout<<cnt<<endl;
	return 0;
}

