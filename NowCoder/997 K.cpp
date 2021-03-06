/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 11:05:21 AM
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
const double INF=100000000;
const int mod=1e9+7;
double x[210],y[210];
set<double> st;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(x[j]-x[i]!=0)
				st.insert((y[j]-y[i])/(x[j]-x[i]));
			else st.insert(INF);
	cout<<st.size();
 	return 0;
}

