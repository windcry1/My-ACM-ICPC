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
char tree[100001];
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
bool print_tree(char *tree,int sub)
{
    if(tree[sub]=='#')
        return false;
    //printf("%c",tree[sub]);
    bool a=print_tree(tree,2*sub);
    bool b=print_tree(tree,2*sub+1);
    if(!a)cnt++;
    if(!b)cnt++;
	return true;
}
int main()
{
    get_tree(tree,1);
    print_tree(tree,1);
	cout<<cnt;
    return 0;
}


