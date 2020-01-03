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
#include<array>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string setting,s,t1,t2,str[256];
	int book[301]={0},n,i,time=0,flag=0;
	cin>>setting;
	int lensetting=setting.length();
	for(i=0;i<lensetting;i++)
	{
		if(islower(setting[i])&&setting[i+1]==':')
			book[setting[i++]]=-1;
		else if(islower(setting[i]))
			book[setting[i]]=1;
	}
	cin>>n;
	getchar();
	while(n--)
	{
		getline(cin,s);
		flag=0;i=0;
		istringstream ss(s);
		ss>>t1;
		cout<<"Case "<<++time<<":";
		while(ss>>t1)
		{
			flag=0;
			if(t1.length()!=2||t1[0]!='-')
				break;
			else
			{
				if(book[t1[1]]==-1)
				{
					for(int j=0;j<i;j++)
					{
						if(str[j]==t1)
						{
							ss>>t1;
							flag=1;
							str[j+1]=t1;
							break;
						}
					}
					if(!flag)
					{
						if(!(ss>>t2))
							break;
						else
						{
							str[i++]=t1;
							str[i++]=t2;
						}
					}
				}
				else if(book[t1[1]]==1)
				{
					for(int j=0;j<i;j++)
						if(str[j]==t1)
						{
							flag=1;
							break;
						}
					if(!flag)
						str[i++]=t1;
				}
				else if(book[t1[1]]==0)
					break;
			}
		}
		for(int j=0;j<i;j++)
			cout<<' '<<str[j];
		putchar('\n');
	}
	return 0;
}

