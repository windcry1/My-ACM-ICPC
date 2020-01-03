/*************************************************************************
	> File Name: 1191 B.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 10:43:04 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <bitset>
#include <complex>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <ctime>
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int MMAX = 0x7fffffff;
const int mod = 1e9+7;
struct node {
	char c;
	int p;
	bool operator <(const node a)const{
		return this->c<a.c||this->c==a.c&&this->p<a.p;
	}
}x[3];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
    //freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	if(s1[1]==s2[1]&&s1[1]==s3[1])
	{
		char a[3]={s1[0],s2[0],s3[0]};
		sort(a,a+3);
		if(a[1]==a[0]+1&&a[2]==a[0]+2||a[1]==a[0]&&a[1]==a[2])
		{
			cout<<0<<endl;
			return 0;
		}
	}
	x[0].c=s1[1];
	x[1].c=s2[1];
	x[2].c=s3[1];
	x[0].p=s1[0]-'0';
	x[1].p=s2[0]-'0';
	x[2].p=s3[0]-'0';
	sort(x,x+3);
	if(x[0].c==x[1].c)
	{
		if(abs(x[0].p-x[1].p)<=2)
		{
			cout<<1<<endl;
			return 0;
		}
	}
	if(x[0].c==x[2].c)
	{
		if(abs(x[0].p-x[2].p)<=2)
		{
			cout<<1<<endl;
			return 0;
		}
	}
	if(x[2].c==x[1].c)
	{
		if(abs(x[2].p-x[1].p)<=2)
		{
			cout<<1<<endl;
			return 0;
		}
	}
	cout<<2<<endl;

    return 0;
}
