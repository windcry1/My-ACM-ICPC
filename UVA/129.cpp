//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
char S[100010];
int n,L,cnt;
int dfs(int cur)
{
    if(cnt++ == n)
    {
        for(int i = 0; i < cur; ++i)
        {
            if(i % 64 == 0 && i) puts("");
            else if(i % 4 == 0 && i) printf(" ");
            printf("%c", 'A' + S[i]);
        }
        printf("\n%d\n", cur);
        return 0;
    }
    for(int i = 0; i < L; ++i)
    {
        S[cur] = i;
        int ok = 1;
        for(int j = 1; j*2 <= cur + 1; ++j)
        {
            int equal = 1;
            for(int k = 0; k < j; ++k)
                if(S[cur-k] != S[cur-k-j]) { equal = 0; break; }
            if(equal) { ok = 0; break; }
        }
        if(ok) if(!dfs(cur+1)) return 0;
    }
    return 1;
}

int main()
{
    while(scanf("%d%d", &n, &L) == 2 && n)
    {
        cnt = 0;
        dfs(0);
    }

    return 0;
}

