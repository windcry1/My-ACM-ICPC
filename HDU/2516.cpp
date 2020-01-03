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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n,f[101]={2,3};
	for(unsigned int i=2;i<50;i++)
		f[i]=f[i-1]+f[i-2];
	while(cin>>n&&n)
	{
		bool flag=true;
		for(int i=0;i<45;i++)
		{
			if(f[i]==n)
			{
				flag=false;
				break;
			}
		}
		cout<<(flag?"First win":"Second win")<<endl;
	}
	
 	return 0;
}

