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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int a[256],c[256];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	string s,str;
	while(cin>>n)
	{
		cin>>str;
		memset(a,0,sizeof(a));
		int num=0;
		int len=str.length();
		for(int i=0;i<len;i++)
			a[str[i]]++;
		string b[101];
		for(int i=0;i<n;i++)
		{
			cin>>s;
			memset(c,0,sizeof(c));
			int flag=0;
			int l=s.length();
			for(string::iterator j=s.begin();j<s.end();j++)
				c[*j]++;
			for(int j=0;j<256;j++)
			{
				if(c[j]!=a[j])
				{
					flag=1;
					break;
				}
			}
			if(!flag)
			{
				b[num]=s;
				num++;
			}
		}
		for(int i=0;i<num;i++)
	    {
            for(int j=1;j<num-i;j++)
            {
                if(b[j]<b[j-1])
                {
            		string temp = b[j-1];
					b[j-1] = b[j];
                	b[j] = temp;
                }
            }
	    }
	    for(int i=0;i<num;i++)
	    	cout<<b[i]<<endl;
		cout<<num<<endl;
	}
 	return 0;
}

