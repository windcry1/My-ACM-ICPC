/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/12/2019 3:57:55 PM
*************************************************************************/
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
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int MAX_L=1e5+10;
string dezero(string a)
{
	long int i;
	for(i=0;i<a.length();i++)
	{
		if(a.at(i)>48) break;
	}
	if(i==a.length()) return "0";
	a.erase(0,i);
	return a;
}
int judge(string a,string b)
{
	if(a.length()>b.length()) return 1;
	if(a.length()<b.length()) return -1;
	long int i;
	for(i=0;i<a.length();i++)
	{
		if(a.at(i)>b.at(i)) return 1;
		if(a.at(i)<b.at(i)) return -1;
	}
	return 0;
}
string _minus(string a,string b)
{
	a=dezero(a);
	b=dezero(b);
	long int i,j=0;
	string c="0";
	string c1,c2;
	string d="-";
	if(judge(a,b)==0) return c;
	if(judge(a,b)==1)
	{
		c1=a;
		c2=b;
	}
	if(judge(a,b)==-1)
	{
		c1=b;
		c2=a;
		j=-1;
	}
	reverse(c1.begin(),c1.end());
	reverse(c2.begin(),c2.end());
	for(i=0;i<c2.length();i++)
	{
		if(c2.at(i)>=48&&c2.at(i)<=57) c2.at(i)-=48;
		if(c2.at(i)>=97&&c2.at(i)<=122) c2.at(i)-=87;
	}
	for(i=0;i<c1.length();i++)
	{
		if(c1.at(i)>=48&&c1.at(i)<=57) c1.at(i)-=48;
		if(c1.at(i)>=97&&c1.at(i)<=122) c1.at(i)-=87;
	}
	for(i=0;i<c2.length();i++)
	{
		c1.at(i)=c1.at(i)-c2.at(i);
	}
	for(i=0;i<c1.length()-1;i++)
	{
		if(c1.at(i)<0)
		{
			c1.at(i)+=10;
			c1.at(i+1)--;
		}
	}
	for(i=c1.length()-1;i>=0;i--)
	{
		if(c1.at(i)>0) break;
	}
	c1.erase(i+1,c1.length());
	for(i=0;i<c1.length();i++)
	{
		if(c1.at(i)>=10) c1.at(i)+=87;
		if(c1.at(i)<10) c1.at(i)+=48;
	}
	reverse(c1.begin(),c1.end());
	if(j==-1) c1.insert(0,d);
	return c1;
}
int _judge(string a,string b)
{
	for(int i=0;i<b.size();i++)
		if(a[i]!=b[i])
			return -1;
	for(int i=b.size();i<a.size();i++)
	{
		if(a[i]!='0')
			return -1;
	}
	return a.size()-b.size();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		string a,b,c,ta;
		int cnt1=0,cnt2=0,cnt3=0;
		cin>>a>>b>>c;
		while(a.back()=='0') a.pop_back();
		while(b.back()=='0') b.pop_back();
		while(c.back()=='0') c.pop_back();
		ta=a;
		int len_m = max(a.length(),max(b.length(),c.length()));
		while(c.length()<=len_m) c+='0',++cnt3;
		while(a.length()<len_m) a+='0',++cnt1;
		cnt2 = _judge(_minus(c,a),b);
		if(cnt2!=-1) {
			cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
			continue;
		}
		while(a.length()<=len_m) a+='0',++cnt1;
		cnt2 = _judge(_minus(c,a),b);
		if(cnt2!=-1) {
			cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
			continue;
		}
		a=ta;cnt2=0;cnt1=0;
		while(b.length()<len_m) b+='0',++cnt2;
		cnt1 = _judge(_minus(c,b),a);
		if(cnt1!=-1) {
			cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
			continue;
		}
		while(b.length()<=len_m) b+='0',++cnt2;
		cnt1 = _judge(_minus(c,b),a);
		if(cnt1!=-1) {
			cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
			continue;
		}
		cout<<-1<<endl;
	}
	return 0;
}

