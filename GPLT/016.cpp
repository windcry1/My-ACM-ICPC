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
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	int book[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char boo1[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	string s;
	cin>>n;
	int flag=0;
	while(n--)
	{
		cin>>s;
		int len=s.length();
		int sum=0;
		for(int i=0;i<len-1;i++)
			sum+=book[i]*(s[i]-'0');
		sum%=11;
		if(s[17]==boo1[sum])
			continue;
		else
		{
			cout<<s<<endl;
			flag=1;
		}
	}
	if(!flag)
		cout<<"All passed"<<endl;
 	return 0;
}

