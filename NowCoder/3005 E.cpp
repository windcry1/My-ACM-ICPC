/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
//#pragma GCC diagnostic error "-std=c++11"
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
string s,digit;
string res[500010],ans;
string invert(string &src){
    string newStr=src;
    for(int i=src.length()-1,j=0; i>=0; --i,++j)
        newStr[j]=src[i];
 
    return newStr;
}
string add(string &rs1,string &rs2)
{
    string str1=invert(rs1);
    string str2=invert(rs2);
 
    if(str1.length()<str2.length())
        str1.swap(str2);
 
    for(size_t i=0; i!=str2.length(); ++i)
    {
        char c1=str1[i];
        char c2=str2[i];
        int t=((int)c1-48)+((int)c2-48);
        if(t>=10)
        {
            //½øÎ»
            int x=t/10;
            t%=10;
            size_t n=i+1;
            do
            {
                int t1=(int)str1[n]-48+x;
                if(t1>=10)
                {
                    str1[n]=(char)(t1%10+48);
                    ++n;
                }
                else
                {
                    str1[n]=(char)(t1+48);
                }
                if(n==str1.length())
                {
                    str1+="1";
                    break;
                }
                x=t1/10;
            }
            while(x!=0);
 
            str1[i]=(char)(t+48);
        }
        else
        {
            str1[i]=(char)(t+48);
        }
    }
    string &rstrResult=str1;
    string strOut=invert(rstrResult);
    return strOut;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>s;
	int cnt=0;
	for(auto i:s){
		if(isdigit(i)) digit.push_back(i);
		else cnt++;
	}
	int t1=digit.size()/(cnt+1),t2=digit.size()%(cnt+1);
	sort(ALL(digit),greater<char>());
	for(int i=0;i<t2;i++){
		res[i].push_back(digit.back());
		digit.pop_back();
	}
	for(int j=0;j<t1;j++){
		for(int i=0;i<cnt+1;i++){
			res[i].push_back(digit.back());
			digit.pop_back();
		}
	}
	ans=res[0];
	for(int i=1;i<cnt+1;i++){
		ans=add(res[i],ans);
	}
	cout<<ans<<endl;
	return 0;
}


