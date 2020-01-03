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
#include<map>
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
//ll power(ll a,ll b)
//{
//	ll res=1;
//    while(b)
//    {
//        if(b&1) res=res*a%mod;
//        b>>=1;
//        a=a*a%mod;
//    }
//    return res;
//}
string change(int t)
{
	if(t==0)
		return "";
	if(t==1)
		return "1";
	if(t==2)
		return "4";
	if(t==3)
		return "7";
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int k;
	while(cin>>k)
	{
	int cnt=0;
	string s;
	int flag=0;
	for(int p=0;p<4;p++)
	{
		s=change(p);
		for(int a=0;a<4;a++)
		{
			if(p&&!a)
				continue;
			s+=change(a);
			for(int b=0;b<4;b++)
			{
				if(a&&!b)
					continue;
				s+=change(b);
				for(int c=0;c<4;c++)
				{
					if(b&&!c)
						continue;
					s+=change(c);
					for(int d=0;d<4;d++)
					{
						if(c&&!d)
							continue;
						s+=change(d);
						for(int e=0;e<4;e++)
						{
							if(d&&!e)
								continue;
							s+=change(e);
							for(int f=0;f<4;f++)
							{
								if(e&&!f)
									continue;
								s+=change(f);
								for(int g=0;g<4;g++)
								{
									if(f&&!g)
										continue;
									s+=change(g);
									for(int h=1;h<4;h++)
									{
										s+=change(h);
										cnt++;
										if(cnt==k)
										{
											cout<<s<<endl;
											flag=1;
											break;
										}
										if(h)
										s.erase(s.end()-1); 
									}
									if(g)
									s.erase(s.end()-1); 
									if(flag)
										break;
								}
								if(f)
								s.erase(s.end()-1);
								if(flag)
									break;
							}
							if(e)
							s.erase(s.end()-1); if(flag)
									break;
						}
						if(d)
						s.erase(s.end()-1);  if(flag)
									break;
					}
					if(c)
					s.erase(s.end()-1); if(flag)
									break;
				}
				if(b)
				s.erase(s.end()-1); if(flag)
									break;
			}
			if(a) 
			s.erase(s.end()-1); if(flag)
									break;
		}
		if(p) 
			s.erase(s.end()-1); if(flag)
									break;
	}
	//s.pop_back(); 
}
 	return 0;
}

