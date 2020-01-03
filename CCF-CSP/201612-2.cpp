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
	int n;
	scanf("%d",&n);
	for(int j=100;j<=140000;j+=100)
	{
		int sum=0;
		if(j>=3500)
		{
			int i=j-3500;
			if(i>=80000)
				sum+=i-((i-80000)*0.45+8750+6000+6500+900+300+45);
			else if(i>=60000)
				sum+=i-((i-55000)*0.35+6000+6500+900+300+45);
			else if(i>=35000)
				sum+=i-((i-35000)*0.3+6500+900+300+45);
			else if(i>=9000)
				sum+=i-((i-9000)*0.25+900+300+45);
			else if(i>=4500)
				sum+=i-((i-4500)*0.2+300+45);
			else if(i>=1500)
				sum+=i-((i-1500)*0.1+45);
			else
				sum+=i*0.97;
			sum+=3500;
		}
		else sum=j;
		if(sum==n)
		{
			printf("%d\n",j);
			break;
		}
	}
	return 0;
}

