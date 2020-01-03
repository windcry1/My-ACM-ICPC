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
	char s[1001],sum1=0,sum2=0,sum3=0,sum4=0;;
	fgets(s,1000,stdin);
	int len=strlen(s);
	for(int i=0;i<len-1;i++)
	{
		if(isalpha(s[i])) sum1++;
		else if(isdigit(s[i])) sum2++;
		else if(isspace(s[i])) sum3++;
		else sum4++;
	}
	printf("%d %d %d %d\n",sum1,sum2,sum3,sum4);
	return 0;
}

