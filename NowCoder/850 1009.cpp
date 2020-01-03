/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/29/2019 12:00:54 PM
*************************************************************************/
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
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<int> num;
int sum[2010];
vector<int> dp[2010];
int res=0;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
    while(scanf("%d",&n)!=EOF)
    {
        int t; 
	    for(int i=0;i<n;i++)//如果i是从1开始，在lower_bound中的到的位置会返回到0，这样就不可以把lis[1]的位置替换掉，从而WA。
        	cin>>t,num.push_back(t),sum[i]=num[i],dp[i].push_back(num[i]);
        //cout<<lis()<<endl;
		sum[0] = num[0];
        for(int i = 1; i<n; i++)
        {
            for(int j = i-1; j>=0; j--)
            {
                if(num[j]<=num[i])   //符合递增子序列
                {
                	if(sum[j]+num[i]>sum[i])
                		dp[i]=dp[j],dp[i].push_back(num[i]),sum[i]=sum[j]+num[i];
				}
                    //sum[i] = max(sum[j]+num[i], sum[i]);
            }
        }
        int maxsum = sum[0];
		for(int i = 1; i<n; i++)
            if(maxsum<sum[i]) maxsum = sum[i],t=i;
        cout<<maxsum<<endl;
        for(auto i:dp[t])
        	cout<<i<<" ";
        cout<<endl;
        //printf("%d\n",len+1);//len是从0开始的，所以要加上1。
    }
 	return 0;
}

