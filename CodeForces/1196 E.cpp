/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 1:46:53 PM
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
	int T;
	cin>>T;
	while(T--)
	{
		int w,b;
		cin>>w>>b;
		int x=3;
		if(w>b) swap(w,b),x++;
		if(b>3*w+1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(auto i=1;i<w+1;i++)
			cout<<i*2<<" "<<x<<endl<<i*2+1<<" "<<x<<endl;
		b-=w;
		if(!b) continue;
		else 
		{
			cout<<1<<" "<<x<<endl;
			--b;
			for(int i=1;i<w+1;i++)
			{
				if(!b) break;
				cout<<i*2<<" "<<x-1<<endl,--b;
			}
			for(int i=1;i<w+1;i++)
			{
				if(!b) break;
				cout<<i*2<<" "<<x+1<<endl,--b;
			}
		}
		
	}
 	return 0;
}

