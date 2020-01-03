/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 1:20:57 AM
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
string a[110],b[110];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char c;
	int n;
	cin>>c>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
		getline(cin,a[i]),b[n-1-i]=string(a[i].rbegin(),a[i].rend());
	int f=0;
	
	for(int i=0;i<n;i++)
		if(a[i]!=b[i])
		{
			f=1;
			break;
		}
	for(int i=0;i<n;i++)
		for(auto &j:b[i])
			if(j!=' ')
				j=c;
	if(!f)
		cout<<"bu yong dao le"<<endl;
	for(int i=0;i<n;i++)
		cout<<b[i]<<endl;
 	return 0;
}

