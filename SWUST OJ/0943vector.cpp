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

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	vector<int> a;
	int n,t,item,data;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		a.push_back(t);
	}
	cin>>item>>data;
	int i;
	for(i=0;i<a.size();i++)
	{
		if(a[i]==item)
		{
			a.insert(a.begin()+i,data);
			break;
		}
	}
	if(i==a.size())
		a.push_back(data);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<' ';
	return 0;
}

