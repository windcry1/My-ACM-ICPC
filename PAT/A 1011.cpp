/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/27/2019 9:03:18 PM
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
vector<char> v;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	double res=1;
	for(int i=0;i<3;i++)
	{
		double MAX=0;
		int p=0;
		for(int j=0;j<3;j++)
		{
			double t; cin>>t;
			if(t>MAX) MAX=t,p=j;
		}
		res*=MAX;
		if(p==0)
			v.push_back('W');
		if(p==1)
			v.push_back('T');
		if(p==2)
			v.push_back('L');
	}
	for(auto i:v)
		cout<<i<<" ";
	cout<<fixed<<setprecision(2)<<(res*0.65-1)*2<<endl;
 	return 0;
}

