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
struct node{
	int a,b;
};
node count(string s)
{
	int res=0;
	node t;
	t.a=0;t.b=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
			t.a++;
		if(s[i]=='1')
			t.b++;
	}
	return t;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	string s,a,b;
	cin>>s;
	node pa=count(s);
	if(pa.a!=pa.b)
	{
		cout<<"1\n"<<s<<endl;
		return 0;
	}
	cout<<"2"<<endl;
	cout<<s[0]<<" ";
	for(int i=1;i<s.length();i++)
		cout<<s[i];
	cout<<endl;
 	return 0;
}

