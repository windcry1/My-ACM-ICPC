#pragma GCC optimize(3)
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<bitset>
using namespace std;
typedef unsigned long long ull;
typedef pair<int,int> P;
int A[100010];
int n,m;
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) {
        scanf("%d",&A[i]);
    }
    while(m--) {
        int op,l,r,v;
        scanf("%d",&op);
        if(op==1) {
            scanf("%d%d%d",&l,&r,&v);
            if(v==1)continue;
            while(l<=r) {
                if(A[l]>=v&&A[l]%v==0) {
                    A[l]/=v;
                }
                l++;
            }
        } else {
        	scanf("%d%d",&l,&r);
            long long ans=0;
            while(l<=r) {
                ans+=A[l++];
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
