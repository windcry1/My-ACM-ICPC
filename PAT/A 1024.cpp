/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 6:22:36 PM
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
int m;
string s,rs;
string bigAdd(string num1,string num2){
	string res="";
	int carry=0;
	int len1=num1.length()-1;
	int len2=num2.length()-1;
	while(len1>=0 || len2>=0){
		int a=len1>=0 ? num1[len1--]-'0' : 0;//从最后一位开始相加，不够的补0
		int b=len2>=0 ? num2[len2--]-'0' : 0;
		int tmp=a+b+carry;
		carry=tmp/10;//进位
		res=to_string(1LL*(tmp%10))+res;
	}
	if(carry){//如果最高位有进位，加上
		res=to_string(1LL*(carry))+res;
	}
	return res;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>s>>m;
	int cnt=0;
	while(m--)
	{
		rs=s;
		reverse(rs.begin(),rs.end());
		if(s==rs)
		{
			cout<<s<<endl<<cnt<<endl;
			return 0;
		}
		s=bigAdd(s,rs);//stoll(rs)+stoll(s);
		//s=to_string(temp);
		++cnt;
		
	}
	cout<<s<<endl<<cnt<<endl;
 	return 0;
}

