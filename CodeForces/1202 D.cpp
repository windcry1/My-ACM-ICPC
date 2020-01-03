/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 10:29:41 PM
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
int a[40010];
int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
    for(int i=1;i<=1000;i++){
        a[i]=i*(i-1)/2;
    }
    cin>>T;
    while(T--)
	{
        ll n;
        cin>>n;
        for(int i=1000;i>=2;i--)
		{
            int now=n/a[i];
            int remain=n%a[i];
            if(now+i+remain<=1e5)
			{
                for(int j=1;j<=now;j++)
                    cout<<"1";
                for(int j=1;j<=i-2;j++)
                    cout<<"3";
                for(int j=1;j<=remain;j++)
                    cout<<"1";
                cout<<"337"<<endl;
                break;
            }
        }
    }
	return 0;
}

