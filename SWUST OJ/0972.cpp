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
int cnt[1000];
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
void print_tree(char *tree,int sub,int p)
{
    if(tree[sub]=='#')
        return;
    cnt[p]++;
    //printf("%c",tree[sub]);
    print_tree(tree,2*sub,p+1);
    print_tree(tree,2*sub+1,p+1);
}
int main()
{
    char tree[1000];
    get_tree(tree,1);
    print_tree(tree,1,0);
    int MAX=0;
	for(int i=0;i<1000;i++)
	{
		if(cnt[i]>MAX)
			MAX=cnt[i];
	}
	cout<<MAX;
    return 0;
}


