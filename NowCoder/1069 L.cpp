/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/28/2019 6:36:51 PM
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
int slove(int n)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int i=0;
	int a;
	if(n==1) cout<<"2(0)";
  	else if(n==2) cout<<"2";
	else
	{
		for(int sam=1;sam<=n;i=i+1)
    	{
			sam*=2;
			a=sam;
		}
	    if((i-1)==1) cout<<"2";
		else
		{
			cout<<"2(";
			slove(i-1);
	    	cout<<")";
		}
	    if(n-a/2)
	    {
			cout<<"+";
			slove(n-a/2);
	    }
	}
	return 0;
}
int main()
{
	int x;
	cin>>x;
	slove(x);
	cout<<endl;
	return 0;
}

