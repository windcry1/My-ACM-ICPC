/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 1:05:58 AM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;
	cin>>a>>b;
	a=100-a;
	a+=b;
	cout<<5000-a*50<<endl;
 	return 0;
}

