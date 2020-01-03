/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/28/2019 6:09:17 PM
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
    int s,d;
    int ss,dd;
    while(cin>>s>>d)
    {
        if(d>4*s)
        {
            ss=10;
            dd=2;
        }
        else if(2*d>3*s)
        {
            ss=8;
            dd=4;
        }
        else if(3*d>2*s)
        {
            ss=6;
            dd=6;
        }
        else if(4*d>s)
        {
            ss=3;
            dd=9;
        }
        else
        {
            ss=0;
            dd=12;
        }
        if(ss*s-dd*d>=0)
        	cout<<ss*s-dd*d<<endl;
        else cout<<"Deficit"<<endl;
    }
 	return 0;
}

