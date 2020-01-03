/*************************************************************************
	> File Name: 949 B.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 9:01:17 PM
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
    //freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	int n,m;
	cin>>n>>m;
	int a[1010]={0};
	a[1]=1;
	for(int i=2;i<=n;i++)
		a[i]=(a[i-1]*2+2)%mod;
	int sum[1010]={0};
	for(int i=1;i<=n;i++)
		sum[i]=(sum[i-1]+a[i])%mod;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		cout<<(sum[b]-sum[a-1]+mod)%mod<<endl;
	}
    return 0;
}
