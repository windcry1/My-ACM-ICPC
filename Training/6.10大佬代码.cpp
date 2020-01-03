
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdio>
#include <stack>
#include <set>
#define MAXN 2004
using namespace std;
 
int f[MAXN],r[MAXN];
bool flag;
 
int getf(int x){
    if(x == f[x]) return x;
    int t = getf(f[x]);
    r[x] = (r[x] + r[f[x]]) % 2;
    f[x] = t;
    return t;
}
 
void Union(int a,int b){
    int x=getf(a),y=getf(b);
	if(x!=y)
	{
		f[y]=x;
		r[y]=(r[a]+1-r[b]+2)%2;
	}
	else if(r[a]==r[b])
		flag=false;
}
void __init__(int n)
{
	for(int i=0;i<=n;i++)
		f[i]=i;
	for(int i=0;i<=n;i++)
		r[i]=0;
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;++i){
        int n,m;
        scanf("%d%d",&n,&m);
    	__init__(n);
        flag = true;
        int a,b;
        for(int i=0;i<m;++i){
            scanf("%d%d",&a,&b);
            if(flag) Union(a,b);
        }
        printf("Scenario #%d:\n",i);
        if(flag) cout << "No suspicious bugs found!" << endl;
        else cout << "Suspicious bugs found!" << endl;
        cout << endl;
    }
    return 0;
}
