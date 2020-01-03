/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 10:21:27 PM
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
	int n,m,k;
	while(cin>>n>>m>>k&&(n||m||k))
	{
		if(k==0)
		{
			int temp=n/m;
			n%=m;n*=10;
			if(n/m>=5)
				temp++;
			cout<<temp<<endl;
			continue;
		}
		cout<<n/m<<".";
		n%=m;
		for(int i=0;i<k-1;i++)
		{
			n*=10;
			cout<<n/m;
			n%=m;
		}
		n*=10;
		int temp=n/m;
		n=(n%m)*10;
		if(n/m>=5)
			temp++;
		cout<<temp<<endl;
	}
	return 0;
}

