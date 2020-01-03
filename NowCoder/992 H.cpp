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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<char> v[220];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<220;i++)
			v[i].clear();
		int cnt=0;
		for(int i=0;i<2*n+1;i++)
			for(int j=0;j<2*n+1;j++)
			{
				v[i].push_back('a'+cnt%26);
				cnt++;
			}
		for(int i=0;i<2*n+1;i++)
		{
			if(i%2==0)
				for(auto j:v[i])
					cout<<j;
			else
			{
				for(int j=v[i].size()-1;j>=0;j--)
					cout<<v[i][j];
			}
			cout<<endl;
			
		}
	}
 	return 0;
}

