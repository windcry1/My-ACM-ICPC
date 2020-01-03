/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 8:20:24 PM
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
const double clf=0.05;
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
	int n;cin>>n;cin.ignore();
	while(n--)
	{
		string s,temp;
		while(true)
		{
			getline(cin,temp);
			if(temp=="")
				break;
			s+=temp;
		}
		int cnt=0;
		for(string::iterator i=s.begin();i!=s.end();i++)
			if(*i=='#')
				++cnt;
		double t=100.0-100.0*cnt/s.length();
		if(fabs(t-ceil(t))>clf)
			cout<<fixed<<setprecision(1)<<"Efficiency ratio is "<<t<<"%."<<endl;
		else cout<<fixed<<setprecision(0)<<"Efficiency ratio is "<<t<<"%."<<endl;
	}
	return 0;
}

