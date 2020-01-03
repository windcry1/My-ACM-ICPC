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
const int MMAX=2147483647;
const int mod=1e9+7;
struct node{
	int sex;
	string name;
}a[10001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i].sex>>a[i].name;
	for(int i=0;i<n;i++)
	{
		if(a[i].sex==-1)
			continue;
		for(int j=n-1;j>=0;j--)
		{
			if(a[j].sex!=-1&&a[j].sex==a[i].sex^1)
			{
				a[j].sex=-1;
				cout<<a[i].name<<" "<<a[j].name<<endl;
				break;
			}
		}
	}
 	return 0;
}

