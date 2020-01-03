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
int lowbit(int n)
{
	return n&(-n);
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{
		//cout<<lowbit(n)<<endl;
		int cnt=0;
		bitset<32> bits(n);//define a bitset, size = 32, which is inited with n
		for(int i=0;i<31;i++)
		{
			if(bits[i]==1)
				cnt++;
		}
		cout<<"The parity of ";
		int flag=0;
		for(int i=31;i>=0;i--)//This is from the last one to the first one
		{
			if(bits[i]==1)
				flag=1;
			if(!flag)
				continue;
			cout<<bits[i];
		}
		cout<<" is "<<cnt<<" (mod 2)."<<endl;
	}
 	return 0;
}

