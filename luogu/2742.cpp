// #include <iostream>
// #include <cstring>
// #include <cstdio>
// #include <cstdlib>
// #include <cmath>
// #include <vector>
// #include <map>
// #include <queue>
// #include <stack>
// #include <algorithm>
// #include <set>
// #include <deque>
// #include <bitset>
// #include <list>
// #include <array>
// #include <forward_list>
// #define ll long long
// #define ull unsigned long long
// #define lowbit(x) (x&(-x))
// #define inf 0x3f3f3f3f
// #define IOS std::ios::sync_with_stdio(false)
// #define undocin cin.tie(NULL)
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
const int N = 1e5 + 7;
struct Pair{
    int x, y;
}a[N];
double Sq(Pair a, Pair b, Pair c)
{
    return (a.x * b.y + b.x * c.y + c.x * a.y - a.x * c.y - b.x * a.y -c.x * b.y) * 1.0 / 2;
}
bool cmp(Pair a, Pair b)
{
    return a.x < b.x;
}

double Solve(int l, int r, int m)
{
    int mid = -1;
    double mids = 0;
    for(int i = l + 1; i < r; i++)
    {
        double dis = Sq(a[l], a[r], a[i]) * m;
        if(dis > mids)
        {
            mids = dis;
            mid = i;
        }
    }
    if(mid == -1)return 0;
    return Solve(l, mid, m) + Solve(mid, r, m) + mids;
}
int main()
{
	#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int t, n;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i].x >> a[i].y;
        sort(a, a + n, cmp);
        double ans = Solve(0, n - 1, 1) + Solve(0, n - 1, -1);
        printf("%d\n", (int)(ans/50));
    return 0;
}
