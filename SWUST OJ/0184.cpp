//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int book[]={1,-2,4,-8,16,-32,64,-128,256,-512,1024,-2048,4096,-8192,16384,-32768,65536,-131072,262144,-524288,1048576,-2097152};
int flag[200001][20];
int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int m,k,t,s;
    while(cin>>m)
	{
		if(m==0)
		{
			cout<<0<<endl;
			continue;
		}
        vector<int> ans;
        s=m;
        while(m!=0)
		{
            k=m%-2;
            t=m/-2;
            if(k<0)
			{
                k+=2;
                t++;
            }
            m=t;
            ans.push_back(k);
        }
        for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i];
        cout<<'\n';
    }
    return 0;
}

