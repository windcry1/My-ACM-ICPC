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
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	while(n--)
	{
		double x,y;
		cin>>x>>y;
		double x1,x2,y1,y2;
		x1=-x/2-sqrt(3)/2*y;
		y1=-y/2+sqrt(3)/2*x;
		x2=-x/2+sqrt(3)/2*y;
		y2=-y/2-sqrt(3)/2*x;
		if(y1<y2)
		cout<<fixed<<setprecision(3)<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		else if(y1>y2)
		cout<<fixed<<setprecision(3)<<x2<<" "<<y2<<" "<<x1<<" "<<y1<<endl;
		else{
			if(x1<x2)
				cout<<fixed<<setprecision(3)<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
			else
				cout<<fixed<<setprecision(3)<<x2<<" "<<y2<<" "<<x1<<" "<<y1<<endl;
		}
	}
 	return 0;
}

