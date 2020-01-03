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
void get_tree(char *tree,int sub)
{
    char t;
    cin>>t;
    tree[sub]=t;
    if(t=='#')
        return;
    get_tree(tree,2*sub);
    get_tree(tree,2*sub+1);
}
void print_tree1(char *tree,int sub)
{
    if(tree[sub]=='#')
    	return;
	print_tree1(tree,2*sub+1);
	cout<<tree[sub];
    print_tree1(tree,2*sub);
}
void print_tree2(char *tree,int sub)
{
    if(tree[sub]=='#')
    	return;
	cout<<tree[sub];
	print_tree2(tree,2*sub+1);
    print_tree2(tree,2*sub);
}
int main()
{
    get_tree(tree,1);
    print_tree1(tree,1);
    cout<<endl;
    print_tree2(tree,1);
    cout<<endl;
    return 0;
}
