/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/23/2019 11:59:34 PM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<int> v;
int flag[100010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,times=0;
	cin>>T;
	while(T--)
	{
		memset(flag,0,sizeof(flag));
		v.clear();
		int n,k,t;
		cin>>n>>k;
		int sum=0;
		for(int i=0;i<n;i++)
			cin>>t,sum+=t,v.push_back(t);
		if(sum%k!=0)
		{
			cout<<"Case "<<++times<<": -1"<<endl;
			continue;
		}
		sum/=k;
		int cnt=0;
		for(auto i:v)
			if(i>sum)
				cnt+=i/sum-1,v.push_back(i%sum);
		for(auto i:v)
			if(i<sum)
				flag[i]++;
		for(int i=1;i<sum;i++)
		{
			int temp=min(flag[i],flag[sum-i]);
			flag[i]-=temp;
			flag[sum-i]-=temp;
			cnt+=temp;
		}
		cout<<"Case "<<++times<<": "<<cnt<<endl;
	}
 	return 0;
}

