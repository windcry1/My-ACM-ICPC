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
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int len1=s1.length();
	int len2=s2.length();
	for(int i=0;i<len1;i++)
	{
		int j;
		for(j=0;j<len2;j++)
		{
			if(s1[i]==s2[j])
				break;
		}
		if(j==len2)
			cout<<s1[i];
	}
	cout<<endl;
 	return 0;
}

