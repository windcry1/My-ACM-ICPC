/**************************************************************
>>> Author: dahetao
>>> Create Time: 2020/8/11 12:25:25
**
 *                    .::::.
 *                  .::::::::.
 *                 :::::::::::  I && YOU
 *             ..:::::::::::'
 *           '::::::::::::'
 *             .::::::::::
 *        '::::::::::::::..
 *             ..::::::::::::.
 *           ``::::::::::::::::
 *            ::::``:::::::::'        .:::.
 *           ::::'   ':::::'       .::::::::.
 *         .::::'      ::::     .:::::::'::::.
 *        .:::'       :::::  .:::::::::' ':::::.
 *       .::'        :::::.:::::::::'      ':::::.
 *      .::'         ::::::::::::::'         ``::::.
 *  ...:::           ::::::::::::'              ``::.
 * ````':.          ':::::::::'                  ::::..
 *                    '.:::::'                    ':'````..
 *
**************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef unsigned long long ull;
int main()
{
    //freopen("test.in","r",stdin);//?? cin scanf ??????? test.in???
    //freopen("test.out","w",stdout);//?? cout printf ????????? test.out???
//    ios::sync_with_stdio(false);
//    cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(x+y-1==n)
        {
            if(x==1)
            {
                puts("YES");
                for(int i=n;i>=1;i--)
                {
                    if(i==1)
                        puts("1");
                    else
                    {
                        printf("%d ",i);
                    }
                }
            }
            else if(y==1)
            {
                puts("YES");
                for(int i=1;i<=n;i++)
                {
                    if(i==n)
                        printf("%d\n",i);
                    else
                    {
                        printf("%d ",i);
                    }
                }
            }
            else
            {
                puts("NO");
            }
        }
        else if(x+y==n)
        {
            puts("YES");
            for(int i=1;i<=x;i++)
            {
                if(i==x-1)
                {
                    printf("%d ",i+1);
                }
                else if(i==x)
                {
                    printf("%d ",i-1);
                }
                else
                {
                    printf("%d ",i);
                }
            }
            for(int i=n;i>x;i--)
            {
                if(i==x+1)
                {
                    printf("%d\n",i);
                }
                else
                {
                    printf("%d ",i);
                }
            }
        }
        else
        {
            puts("NO");
        }
    }
    return 0;
}
