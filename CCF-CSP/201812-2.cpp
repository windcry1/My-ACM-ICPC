//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int r,y,g,n,a,b,t;
	ll s=0; 
	scanf("%d%d%d%d",&r,&y,&g,&n);
	while (n--)
	{
	    scanf("%d%d",&a,&b);
	    if(a==0)
	        s=s+b;
	    else if (a==1)
	    {
	        t = (r - b + s) % (r + y + g);
	        if (t<r)
	            s=s+r-t;
	        if ((t>=r+g) && (t<r+g+y))
	            s=s+r+g+y-t+r;
	    }
	    else if (a==2)
	    {
	        t = (r+g+y - b + s) % (r + y + g);
	        if (t<r)
	            s=s+r-t;
	        if ((t>=r+g) && (t<r+g+y))
	            s=s+r+g+y-t+r;
	    }
	    else if (a==3)
	    {
	        t = (r + g - b + s) % (r + y + g);
	        if (t<r)
	            s=s+r-t;
	        if ((t>=r+g) && (t<r+g+y))
	            s=s+r+g+y-t+r;
	    }
	}
	printf("%lld\n",s);
	return 0;
}

