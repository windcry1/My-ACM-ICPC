
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
char tree[100001],flag=0;
void get_tree(int sub)
{
    char t;
    cin>>t;
    tree[sub]=t;
    if(t=='#')
        return;
    get_tree(2*sub);
    get_tree(2*sub+1);
}
bool print_tree(int sub)
{
    if(tree[sub]=='#')
    	return false;
   	bool a=print_tree(2*sub);
	bool b=print_tree(2*sub+1);
	if(!((!a&&!b)||(a&&!b&&(tree[4*sub]=='#'||tree[4*sub]=='\0'))||a&&b))
		flag=1;
	return true;
}
int main()
{
    get_tree(1);
    print_tree(1);
    cout<<(flag?"N":"Y");
    return 0;
}
