/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 6:27:10 PM
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
vector<int> v;
void change(int n)
{
	while(n!=0)
		v.push_back(n%10),n/=10;
}
string ch(int n)
{
	if(n==0)
		return "zero";
	if(n==1)
		return "one";
	if(n==2)
		return "two";
	if(n==3)
		return "three";
	if(n==4)
		return "four";
	if(n==5)
		return "five";
	if(n==6)
		return "six";
	if(n==7)
		return "seven";
	if(n==8)
		return "eight";
	if(n==9)
		return "nine";
	return "";
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	int ans=0;
	for(auto i:s)
		ans+=i-'0';
	change(ans);
	reverse(v.begin(),v.end());
	int f=0;
	if(s=="0")
	{
		cout<<"zero"<<endl;
		return 0;
	}
	for(auto i:v)
		if(!f)
			cout<<ch(i),f=1;
		else cout<<" "<<ch(i);
	cout<<endl;
	
 	return 0;
}

