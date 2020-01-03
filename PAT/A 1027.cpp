/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 11:51:46 AM
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
void change(int n)
{
	vector<int> v;
	while(n!=0) v.push_back(n%13),n/=13;
	while(v.size()!=2) v.push_back(0);
	reverse(v.begin(),v.end());
	for(auto i:v)
	{
		if(i>=0&&i<=9) cout<<i;
		else cout<<(char)(i+'A'-10);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b,c;cin>>a>>b>>c;
	cout<<"#";
	change(a),change(b),change(c);
	cout<<endl;
	//cout<<"#"<<stoi(a,nullptr,13)<<stoi(b,nullptr,13)<<stoi(c,nullptr,13)<<endl;
	return 0;
}

