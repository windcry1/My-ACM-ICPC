/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 10:17:18 PM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	int n=s.length();
	char pre=s[0];
	int cnt=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]==pre) cnt++;
		else cnt=1,pre=s[i];
		if(!(cnt%2))
		{
			for(int j=0;j<26;j++)
				if(j+'a'!=pre&&j+'a'!=s[i+1])
				{
					s[i]=j+'a';
					break;
				}
		}
	}
	cout<<s<<endl;
	return 0;
}

