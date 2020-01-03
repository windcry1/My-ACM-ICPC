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
char tree[100001];
int cnt[100001];
bool flag=false;
void get_tree(char *tree,int sub)
{
    char t;
    scanf("%c",&t);
    tree[sub]=t;
    if(t=='#')
        return;
    get_tree(tree,2*sub);
    get_tree(tree,2*sub+1);
}
int print_tree(char *tree,int sub,int p)
{
    if(tree[sub]=='#')
        return p-1;
	int l=print_tree(tree,2*sub,p+1);
    int r=print_tree(tree,2*sub+1,p+1);
    if(abs(l-r)>1)
    	flag=1;
    return max(l,r);
}
int main()
{
    get_tree(tree,1);
    print_tree(tree,1,0);
    cout<<(flag?"no!":"yes!");
    return 0;
}
