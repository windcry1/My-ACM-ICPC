//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[11][1025];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	int MAX;
	while(cin>>s)
	{
		MAX=0;
		int len=s.length();
		int count=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]!='#')
				count++;
			else if(s[i]=='#'&&s[i+1]=='#')
			{
				if(count>MAX)
					MAX=count;
				count=0;
				i++;
			}
		}
		cout<<MAX;
	}
	return 0;
}

