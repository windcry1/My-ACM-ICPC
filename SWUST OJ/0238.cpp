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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
struct node{
	string s1;
	string s2;
}a[1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	string s;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i].s1>>a[i].s2;
		cin>>m;
		while(m--)
		{
			cin>>s;
			int i;
			for(i=0;i<n;i++)
			{
				if(a[i].s1==s)
				{
					cout<<a[i].s2<<endl;
					break;
				}
			}
			if(i==n)
				cout<<"none!"<<endl;
		}
	}
 	return 0;
}

