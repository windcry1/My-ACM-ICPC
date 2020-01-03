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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int map[21][21];
bool vis[21];
int low[21];//记录按每个点出发的最小值，从而剪枝 
int n,minn=MMAX,sum;
void dfs(int t,int tot,int count)
{
    if(tot > minn) return;//超出剪枝 
    if(count==n)
	{ 
        if(map[t][1])
		{
            tot+=map[t][1];
            if(tot<minn)
			{
                minn=tot;           
            }
        }        
        return;
    }
     for(int i=1;i<=n;i++)
        if(!vis[i]&&map[t][i]&&tot+map[t][i]+sum-low[t] < minn)
		{            
            vis[i]=1;
            sum -= low[t];
            dfs(i,tot+map[t][i],count+1);
            sum += low[t];
            vis[i]=0;
        } 
    }
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++)
	{
        low[i] = MMAX;
        for(int j=1;j<=n;j++)
	    {
           cin >> map[i][j];
           if(i!=j && low[i] > map[i][j]) low[i] = map[i][j]; 
        }   
        sum += low[i];             
    }         
    vis[1]=1;
    dfs(1,0,1);    
    cout << minn << endl;
    return 0;
}
