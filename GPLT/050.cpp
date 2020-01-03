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
	int l,n;
	cin>>l>>n;
	char a[10]={'\0'};
	for(int i=0;i<l;i++)
		a[i]='z';
	n--;
	while(n--)
	{
		int f=0;
		for(int i=l-1;i>=0;i--)
		{
			if(!f)
			{
				a[i]--;
				f=1;
			}
			if(a[i]!='a'-1)
				break;
			else
			{
				a[i]='z';
				a[i-1]--;
			}
		}
	}
	cout<<a<<endl;
 	return 0;
}

