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
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int A[3];
int main()
{
	memset(A,0,sizeof(A));
	char c;
	int sum=0,flag=0;
	while((c=getchar())!='\n'&&c!=EOF)
		sum+=c-'0';
	int i=0;
	while(sum!=0)
	{
		A[i++]=sum%10;
		sum/=10;
	}
	for(int i=2;i>=0;i--)
	{
		if(A[i]!=0)
			flag=1;
		if(flag==1)
		{
			switch(A[i])
			{
				case 0:printf("ling");
					break;
				case 1:printf("yi");
					break;
				case 2:printf("er");
					break;
				case 3:printf("san");
					break;
				case 4:printf("si");
					break;
				case 5:printf("wu");
					break;
				case 6:printf("liu");
					break;
				case 7:printf("qi");
					break;
				case 8:printf("ba");
					break;
				case 9:printf("jiu");
					break;
			}
			if(i)
				printf(" ");
		}
	}
	return 0;
}

