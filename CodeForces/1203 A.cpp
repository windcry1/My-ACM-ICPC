/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/13/2019 10:25:33 PM
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
#define Low_bit(x) (x&(-x))
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[410],n;

bool up(int p)
{
    for(int i=p+1;i<p+n;i++)
        if(a[i]!=a[i-1]+1)
            return false;
    return true;
}

bool down(int p){
    for(int i=p+1;i<p+n;i++)
        if(a[i]!=a[i-1]-1)
            return false;
    return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
    while(T--)
	{
        cin>>n;
        for(int i=0;i<n;i++)
		{
            cin>>a[i];
            a[i+n] = a[i];
        }
        bool flag = false;
        if(n<=3)
            cout<<"YES"<<endl;
        else
		{
            for(int i=0;i<2*n;i++)
                if(up(i)||down(i)){flag=true;break;}
            cout<<(flag?"YES":"NO")<<endl;
        }
    }
	return 0;
}

