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
int i=0;
string b,a;
void get_tree(int sub,int x,int y)
{
    if(i<b.length())
    {
        tree[sub]=a[i];
        if(b.find(tree[sub])-1!=x)
        {
        	i++;
            get_tree(sub*2,x,b.find(tree[sub])); 
        }
        else
        	tree[sub*2]='#';
        if(b.find(tree[sub])+1!=y)
        {
            i++;
            get_tree(sub*2+1,b.find(tree[sub]),y);//cout<<"Пе";        
        }
        else
       		tree[sub*2+1]='#';
    }    
}
void print_tree1(char *tree,int sub)
{
    if(tree[sub]=='#')
    	return;
   	print_tree1(tree,2*sub);
	print_tree1(tree,2*sub+1);
	cout<<tree[sub];
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    cin>>b>>a;
    int y=b.length(),x=-1;
    get_tree(1,x,y);
    print_tree1(tree,1);
 	return 0;
}

