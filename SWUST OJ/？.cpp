#include<iostream>
using namespace std;
const int MAXN = 21;
int map[MAXN][MAXN];
bool vis[MAXN];
int minlength = 20000;
int n = 0;
void dfs(int t,int tot,int count)
{
if (tot > minlength) return;
if (count == n)
{
if (map[t][1])
{
tot +=map[t][1];
if (tot <minlength)
{
minlength= tot;
}
}
return;
}
for (int i = 1; i <= n; i++)
if (!vis[i] &&map[t][i])
{
vis[i] =1;
dfs(i, tot +map[t][i], count+1);
vis[i] =0;
}
}
int main()
{
cin >> n;
for (int i = 1; i <= n; i++)
for (int j = 1; j <= n;j++)
cin >>map[i][j];
vis[1] = 1;
dfs(1, 0, 1);

cout << minlength << endl;
return 0;
}

