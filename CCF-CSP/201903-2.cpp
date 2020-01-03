/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/12/2019 1:12:17 PM
*************************************************************************/
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
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
inline int getIndex(char c){
	if(c=='+') return 0;
	if(c=='-') return 1;
	if(c=='x') return 2;
	if(c=='/') return 3;
	if(c=='(') return 4;
	if(c==')') return 5;
	if(c=='#') return 6;
	return 0;
}
inline char getPriority(char theta1, char theta2){  
    const char priority[][7]=
    {
    	// +   -   *   /   (   )   #
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
inline int cal(int a,char op,int b){
	if(op=='+') return a+b;
	if(op=='-') return a-b;
	if(op=='x') return a*b;
	if(op=='/') return a/b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;while(T--){
		stack<char> op;
		op.push('#');
		stack<int> num;
		string s;cin>>s;
		s+="#";	
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])) num.push(s[i]-'0');
			else{
				char c=s[i];
				char judge=getPriority(op.top(),c);
				if(judge=='<'){
					op.push(c);
					continue;
				}
				if(judge=='='){
					op.pop();
					continue;
				}
				if(judge=='>'){
					char temp=op.top();op.pop(); 
					int a=num.top();num.pop();
					int b=num.top();num.pop();
					num.push(cal(b,temp,a));
					i--;
					continue;
				}
			}
		}
		cout<<(num.top()==24?"Yes":"No")<<endl;
	}
	return 0;
}

