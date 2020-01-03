//Author:LanceYu
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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
			cnt1++;
		if(s[i]=='4')
			cnt2++;
		if(s[i]=='5')
			cnt3++;
	}
	cout<<min(cnt1/3,min(cnt2/2,cnt3))<<endl;
 	return 0;
}

