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
int cnt=0;
void hanoi(int n,char x,char y,char z)
{
	if(n==1)
	{
		cnt++;
		if(cnt%5==0)
			cout<<(cnt%5==1?"":"   ")<<x<<"-->"<<z<<"\n";
		else cout<<(cnt%5==1?"":"   ")<<x<<"-->"<<z;
	}
	else
	{
		hanoi(n-1,x,z,y);
		cnt++;
		if(cnt%5==0)
			cout<<(cnt%5==1?"":"   ")<<x<<"-->"<<z<<"\n";
		else cout<<(cnt%5==1?"":"   ")<<x<<"-->"<<z;
		hanoi(n-1,y,x,z);
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","w",stdout);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	if(n==0)
		return 0;
	cnt=0;
	hanoi(n,'A','B','C');
	cout<<endl;
 	return 0;
}

