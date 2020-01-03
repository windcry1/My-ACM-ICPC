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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	vector<int> ve;
	int a[10]={0};
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		int t=s[i]-'0';
		if(!a[t])
			a[t]++;
	}
	cout<<"int[] arr = new int[]{";
	int flag=0;
	for(int i=9;i>=0;i--)
	{
		if(a[i]&&!flag)
		{
			flag=1;
			cout<<i;
			ve.push_back(i);
		}
		else if(a[i])
		{
			cout<<","<<i;
			ve.push_back(i);
		}
	}
	cout<<"};\nint[] index = new int[]{";
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<ve.size();j++)
		{
			if(i!=len-1&&s[i]-'0'==ve[j])
			{
				cout<<j<<",";
				break;
			}
			else if(s[i]-'0'==ve[j])
			{
				cout<<j<<"};"<<endl;
				break;
			}
		}
	}
 	return 0;
}

