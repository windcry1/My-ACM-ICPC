/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/18/2019 10:01:09 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[200010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
    if(!(n%2))
    {
		cout<<"NO"<<endl;
		return 0;
	}
    cout<<"YES"<<endl;
    int l=1,r=2*n-1;
    for(int i=0;i<n;i++)
	{
    	if(i%2)
		{
            a[i]=r+1,a[n+i]=r;
            r-=2;
        }
        else
		{
            a[i]=l,a[n+i]=l+1;
            l+=2;
        }
        
    }
    bool flag=false;
    for(int i=0;i<2*n;i++)
		cout<<(flag?" ":"")<<a[i],flag=true;
    cout<<endl;
    return 0;
}
