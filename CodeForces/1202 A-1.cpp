/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/8/2019 12:09:07 AM
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
	int T;cin>>T;
	while(T--)
	{
		int t2;
		string s1,s2;cin>>s1>>s2;
		int cnt=0;
		for(int j=s2.length()-1;j>=0;j--)
		{
			++cnt;
			if(s2[j]=='1')
			{
				t2=cnt;
				break;
			}
		}
		vector<int> v1;
		for(int i=s1.length()-1;i>=0;i--)
		{
			if(s1[i]=='1')
				v1.push_back(s1.length()-i);
		}
//		cout<<"--"<<endl;
//		for(auto i:v1)
//			cout<<i<<endl;
//		cout<<"--"<<endl;
//		cout<<t2<<endl;
//		cout<<"------0"<<endl;
//		if(v1.size()==1)
//			cout<<"0"<<endl;
//		else
		for(int i=0;i<v1.size();i++)
		{
			if(v1[i]>=t2)
			{
				cout<<abs(v1[i]-t2)<<endl;
				break;
			}
		}
	}
	return 0;
}

