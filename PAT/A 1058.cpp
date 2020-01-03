/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/28/2019 1:35:09 AM
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
const ll mod=1e7;
ll g[3],s[3],k[3];
int main()
{
 	//ios::sync_with_stdio(false);
	//cin.tie(0);
    //cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	for(int i=0;i<2;i++)
		scanf("%lld%*c%lld%*c%lld",g+i,s+i,k+i);
	k[2]+=k[1]+k[0];
	while(k[2]>=29) k[2]-=29,s[2]++;
	s[2]+=s[1]+s[0];
	while(s[2]>=17) s[2]-=17,g[2]++;
	g[2]+=g[1]+g[0];
	printf("%lld.%lld.%lld",g[2],s[2],k[2]);
 	return 0;
}

