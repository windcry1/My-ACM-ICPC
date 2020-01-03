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
int change(string s)
{
	if(s=="shitou")
		return 0;
	if(s=="jiandao")
		return 1;
	if(s=="bu")
		return 2;
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
	string s1,s2,s3,s4;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2>>s3>>s4;
		if(change(s2)==0&&change(s4)==1)
		{
			cout<<s3<<" chishi."<<endl;
			continue;
		}
		if(change(s2)==1&&change(s4)==2)
		{
			cout<<s3<<" chishi."<<endl;
			continue;
		}
		if(change(s2)==2&&change(s4)==0)
		{
			cout<<s3<<" chishi."<<endl;
			continue;
		}
		if(change(s2)==change(s4))
		{
			cout<<"yi qi chi shi."<<endl;
			continue;
		}
		cout<<s1<<" chishi."<<endl;
	}
 	return 0;
}

