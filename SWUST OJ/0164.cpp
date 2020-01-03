//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#include <iomanip>
#define ll long long
using namespace std;
const double clf=1e-10;
const int MMAX=2147483647;
const int mod=1e9+7;
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	long double d;
	int T;
	while(cin>>T)
	{
		while(T--)
		{
			cin>>d;
			if(d-0<clf)
			{
				printf("0.0000000000\n");
				continue;
			}
			d=-d;
			long double u=(-27.*d-2)/54.0;
			long double v=sqrt(3*(d*d*27+d*4))/18.0;
			long double m=pow(u+v,(double)1/3);
			long double n=1/(9*m);
			double t=pow(m+n-(double)1/3,6);
			printf("%.10lf\n",t);
		}
	}
	return 0;
}

