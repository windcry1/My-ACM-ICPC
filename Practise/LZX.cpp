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
#include<map>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[100010];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int MAX=0,now=0;
	    for(int i=0;i<n;i++)
	    {
	        now+=a[i];
	        if (now>MAX)
	    		MAX=now;
	        else if(now<0)
				now=0;
		}
	    cout<<MAX<<endl;
	}
	return 0;
}
