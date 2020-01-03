/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/30/2019 5:13:18 PM
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
//int pow(int a,int b)
//{
//	int res=1;
//	while(b--) res*=a;
//	return res;
//}
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
		int k,n;
		cin>>k>>n;
		if(k==1)
		{
			cout<<n-1<<endl;
			continue;
		}
		int t=0;
		for(int i=0;;i++)
		{
			if(n<=pow(k,i))
			{
				t=i;
				break;
			}
			n-=pow(k,i);
		}
		if(n>pow(k,t-1))
			cout<<t*2<<endl;
		else cout<<t*2-1<<endl;
	}
 	return 0;
}

