//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
string a,b;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>a>>b;
	a+=a;
	if(a.find(b)==string::npos)
	{
		cout<<"No"<<endl;
		return 0;
	}
	cout<<"Yes"<<endl;
	string MIN=b;
	int cnt=0;
	while(cnt++!=b.size())
	{
		char c=b.back();
		b.pop_back();
		b.insert(b.begin(),c);
		if(MIN>b)MIN=b;
	}
	cout<<MIN<<endl;
 	return 0;
}

