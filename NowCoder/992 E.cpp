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
#include<list>
#define ll long long
using namespace std;
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
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int res=n,cnt1=n,cnt2=n;
		int f=1;
		while(f)
		{
			f=0;
			if(cnt1>=3)
			{
				cnt1-=3;
				cnt1++;
				cnt2++;
				res++;
				f=1;
			}
			if(cnt2>=4)
			{
				cnt2-=4;
				cnt2++;
				cnt1++;
				res++;
				f=1;
			}
		}
		cout<<res<<endl;
	}
 	return 0;
}

