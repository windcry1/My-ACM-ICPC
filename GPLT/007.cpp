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
string change(char c)
{
	switch(c){
		case '0':return "ling";
        case '1':return "yi";
        case '2':return "er";
        case '-':return "fu";
        case '3':return "san";
        case '4':return "si";
        case '5':return "wu";
        case '6':return "liu";
        case '7':return "qi";
        case '8':return "ba";
        case '9':return "jiu";
	}
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		
		cout<<change(s[i])<< (i!=len-1?' ':'\n');
	}
	return 0;
}

