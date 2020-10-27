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
#include <numeric>
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
#define ls x<<1
#define rs x<<1|1
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
string s;
bool error,proper;
stack<char> opter;
stack<double> opval;
int getIndex(char theta){
	int index = 0;
	switch (theta){
	case '+':
		index = 0;
		break;
	case '-':
		index = 1;
		break;
	case '*':
		index = 2;
		break;
	case '/':
		index = 3;
		break;
	case '(':
		index = 4;
		break;
	case ')':
		index = 5;
		break;
	case '#':
		index = 6;
	default:break;
	}
	return index;
}
char getPriority(char theta1, char theta2){
	const char priority[][7] =     //算符间的优先级关系
	{
		{ '>','>','<','<','<','>','>' },
		{ '>','>','<','<','<','>','>' },
		{ '>','>','>','>','<','>','>' },
		{ '>','>','>','>','<','>','>' },
		{ '<','<','<','<','<','=','0' },
		{ '>','>','>','>','0','>','>' },
		{ '<','<','<','<','<','0','=' },
	};
 
	int index1 = getIndex(theta1);
	int index2 = getIndex(theta2);
	return priority[index1][index2];
}
void getAnswer(){
	opter.push('#');      //首先将'#'入栈opter
	int counter = 0,i = 0,cnt = 0;      //添加变量counter表示有多少个数字相继入栈，实现多位数的四则运算
	while (s[i] != '#' || opter.top() != '#'){
		if (islower(s[i])){
			if (counter == 1){
				error=true;
				opval.pop();
				opval.push(s[i]);
				counter = 1;
				return ;
			}
			else{
				opval.push(s[i]);     //将c对应的数值入栈opval
				counter++;
			}
			i++;
		}
		else{
			counter = 0;   //counter置零
			switch (getPriority(opter.top(), s[i])){
			case '<':               //<则将c入栈opter
				opter.push(s[i]);
				i++;
				break;
			case '=':               //=将opter栈顶元素弹出，用于括号的处理
				opter.pop();
				i++;
				if(cnt!=1) proper=true;
				cnt=0;
				break;
			case '>':               //>则计算
				opter.pop();
				if(!opval.empty()) opval.pop();
				else {
					error=true;
					return ;
				}
				if(!opval.empty()) opval.pop();
				else {
					error=true;
					return ;
				}
				opval.push('a');
				++cnt;
			}
		}
		if(cnt==2) proper=true;
	}
	if(opter.top()!='#') error=true;
	if(opval.size()>1) error=true;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	string t;
	getline(cin,t);
	s+='(';
	for(auto i:t) if(!isspace(i)) s+=i;
	if(s.size()==2 and islower(s[1])){
		cout<<"proper"<<endl;
		return 0;
	}
	for(auto i:s)
		if(!islower(i))
			if(i!='+' and i!='-' and i!='*' and i!='/' and i!='%' and i!='(' and i!=')') error=true;
	s+=")#";
	int cnt=0;
	for(auto i:s){
		if(i=='(') ++cnt;
		else if(i==')') --cnt;
		if(cnt<0) error=true;
	}
	if(cnt>0) error=true;
	if(!error) getAnswer();
	if(error) cout<<"error"<<endl;
	else if(proper) cout<<"improper"<<endl; 
	else cout<<"proper"<<endl;
	return 0;
}


