#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
const int N = 1e3+100;
const double eps = 1e-7;
double a[N];
double b[N];
int x[N];
double s[N];
int n,k;
bool cmp(int a,int b)
{
    return s[a]>s[b];
}
bool check(double mid)
{
    for (int i = 1; i <= n; ++i)
	{
        s[i] = a[i]-mid*b[i];
        x[i] = i;
    }
    sort(x+1,x+n+1,cmp);
    double sum = 0;
    for (int i = 1; i <= k; ++i)
	{
        sum +=s[x[i]];
    } 
    return sum>=0;
} 
int main()
{
    while (scanf("%d%d",&n,&k),n!=0||k!=0)
	{
        double r = 0;
        k=n-k;
         for (int i = 1; i <= n; ++i)
		 {
            scanf("%lf",&a[i]);
         }
         for (int i = 1; i <= n; ++i)
		 {
            scanf("%lf",&b[i]);
            r = max(r,a[i]/b[i]);
         }
         double l = 0,mid; 
         while (r-l>eps)
		 {
            mid = (l+r)/2;
            if (check(mid)) l = mid;
            else r = mid;
         }
         printf("%.0f\n",l*100);
    }

    return 0;
}
