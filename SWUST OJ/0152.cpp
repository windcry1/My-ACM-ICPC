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
struct node{
	string name,g,x;
	int scorea;
	int scoreb;
	int paper;
}x[101];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,MAX=0,count,sum=0,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		count=0;
		cin>>x[i].name>>x[i].scorea>>x[i].scoreb>>x[i].g>>x[i].x>>x[i].paper;
		if(x[i].scorea>80&&x[i].paper>=1)
			count+=8000;
		if(x[i].scorea>85&&x[i].scoreb>80)
			count+=4000;
		if(x[i].scorea>90)
			count+=2000;
		if(x[i].scorea>85&&x[i].x=="Y")
			count+=1000;
		if(x[i].scoreb>80&&x[i].g=="Y")
			count+=850;
		if(MAX<count)
		{
			MAX=count;
			num=i;
		}
		sum+=count;
	}
	cout<<x[num].name<<'\n'<<MAX<<'\n'<<sum<<endl;
	return 0;
}

