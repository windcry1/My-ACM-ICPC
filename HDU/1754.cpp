
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
const int MAXN = 3e5;
int a[MAXN], h[MAXN];
int n, m;
 
int lowbit(int x)
{
	return x & (-x);
}
void updata(int x)
{
	int lx, i;
	while (x <= n)
	{
		h[x] = a[x];
		lx = lowbit(x);
		for (i=1; i<lx; i<<=1)
			h[x] = max(h[x], h[x-i]);
		x += lowbit(x);
	}		
}
int query(int x, int y)
{
	int ans = 0;
	while (y >= x)
	{
		ans = max(a[y], ans);
		y --;
		for (; y-lowbit(y) >= x; y -= lowbit(y))
			ans = max(h[y], ans);
	}
	return ans;
}
int main()
{
	int i, j, x, y, ans;
	char c;
	while (scanf("%d%d",&n,&m)!=EOF)
	{
		for (i=1; i<=n; i++)
			h[i] = 0;
		for (i=1; i<=n; i++)
		{
			scanf("%d",&a[i]);
			updata(i);
		}
		for (i=1; i<=m; i++)
		{
			scanf("%c",&c);
			scanf("%c",&c);
			if (c == 'Q')
			{
				scanf("%d%d",&x,&y);
				ans = query(x, y);
				printf("%d\n",ans);
			}
			else if (c == 'U')
			{
				scanf("%d%d",&x,&y);
				a[x] = y;
				updata(x);
			}
		}
	}
	return 0;
}
