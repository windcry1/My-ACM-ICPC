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
int cnt=0;
char tree[100001],t;
void get_tree(char *tree,int sub)
{
    char c;
    scanf("%c",&c);
    tree[sub]=c;
    if(c=='#')
        return;
    get_tree(tree,2*sub);
    get_tree(tree,2*sub+1);
}
void print_tree(char *tree,int sub)
{
    if(tree[sub]=='#')
        return ;
    if(tree[sub]==t)
    	cout<<tree[sub/2];
    print_tree(tree,2*sub);
    print_tree(tree,2*sub+1);
}
int main()
{
	tree[0]='#';
    get_tree(tree,1);
    cin>>t;
    print_tree(tree,1);
    return 0;
}


