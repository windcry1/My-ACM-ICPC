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
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
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
	string s,s1="",s2="";
	int cnt=0;
	while(cin>>s&&s!=".")
	{
		cnt++;
		if(cnt==2)
			s1=s;
		if(cnt==14)
			s2=s;
	}
	if(s1!=""&&s2!="")
		cout<<s1<<" and "<<s2<<" are inviting you to dinner...\n";
	else if(s1!="")
		cout<<s1<<" is the only one for you...\n";
	else cout<<"Momo... No one is for you ...\n";
 	return 0;
}

