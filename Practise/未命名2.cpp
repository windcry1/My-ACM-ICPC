//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<windows.h> 
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;


HANDLE hCom; //全局变量，串口句柄
hCom=CreateFile("COM1",//COM1口
GENERIC_READ|GENERIC_WRITE, //允许读和写
0, //独占方式
NULL,
OPEN_EXISTING, //打开而不是创建
0, //同步方式
NULL);
if(hCom==(HANDLE)-1)
{
	AfxMessageBox("打开COM失败!");
	return FALSE;
}
return TRUE;
int main()
{
	double w,h,r,max,min;
	while(scanf("%lf%lf",&w,&h)!=EOF)
	{
		if(w>h)
		{
			max=w;
			min=h;
		}
		else
		{
			max=h;
			min=w;
		}
		r=sqrt(max*max/4+min*min);
		printf("%.3lf\n",r);
	}
}
