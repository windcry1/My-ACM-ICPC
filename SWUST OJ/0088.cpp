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
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int change(char c)
{
	if(c=='+')return 0;
	if(c=='-')return 1;
	if(c=='*')return 2;
	if(c=='/')return 3;
	if(c=='(')return 4;
	if(c==')')return 5;
	if(c=='#')return 6;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	stack<int> num;
	stack<char> op;
	queue<char> q;
	char priority[7][7]={
//  +    -   *   /   (   )   #
	'<','<','>','>','>','<','<',//+
	'<','<','>','>','>','<','<',//-
	'<','<','<','<','>','<','<',//*
	'<','<','<','<','>','<','<',///
	'>','>','>','>','>','=','<',//(
	' ',' ',' ',' ',' ',' ',' ',//)
	'>','>','>','>','>','#',' ' //#
	};
	cin>>s;
	op.push('#');
	for(int i=0;i<s.length();i++)
	{
		if(isdigit(s[i]))
			q.push(s[i]);
		else
		{
			char por=priority[change(op.top())][change(s[i])];
			if(por=='>')
				op.push(s[i]);
			else if(por=='<')
			{
				while(1)
				{
					por=priority[change(op.top())][change(s[i])];
					if(por=='<')
					{
						q.push(op.top());
						op.pop();
					}
					else if(por=='=')
					{
						op.pop();
						break;
					}
					else
					{
						op.push(s[i]);
						break;
					}
				}
			}
		}
	}
	while(op.top()!='#')
	{
		q.push(op.top());
		op.pop();
	}
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
 	return 0;
}

