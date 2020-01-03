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
	//freopen("C:\\Users\\LENOVO\\Desktop\\0.in","w",stdout);
	for(int i=0;i<4;i++)
	{
		srand(time(NULL)+i*168);
		cout<<rand()%10; 
	}
	cout<<endl;
	for(int i=0;i<4;i++)
	{
		srand(time(NULL)+i*9123);
		cout<<rand()%10;
	}
	cout<<endl;
	for(int i=0;i<4;i++)
	{
		srand(time(NULL)+i*1286);
		cout<<rand()%10;
	}
 	return 0;
}

