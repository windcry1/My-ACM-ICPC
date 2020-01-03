/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 12:06:34 PM
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
int an[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		memset(an,0,sizeof(an));
		string s;
		cin>>s;
		int len=s.length();
		//int cnt=0;
		for(int i=1;i<=len-1;i++)
		{
			int k=0;
			while(i+k<len)
			{
				if(s[k]==s[i+k])
					++k;
				else
				{
					++k;
					break;
				}
			}
			//cnt+=k;
			an[i]=k;
		}
		//cout<<cnt<<endl;
		int sum=0;
		for(int i=0;i<=len;i++)
			sum+=an[i];
		cout<<sum<<endl;
//		cout<<"debug"<<endl;
//		for(int i=0;i<=len-1;i++)
//			cout<<an[i]<<" ";
//		cout<<endl<<endl;
	}
	return 0;
}

