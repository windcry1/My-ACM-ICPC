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
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll GetUglyNumber_Solution(int index)
{
        if(index < 7)
            return index;
        vector<ll> res(index);
        res[0] = 1;
        int id2 = 0;
        int id3 = 0;
        int id5 = 0;
        for(int i = 1; i < index; ++i)
        {
            res[i] = min(res[id2]*2, min(res[id3]*3, res[id5]*5));
            if(res[i] == res[id2]*2)
                ++id2;
            if(res[i] == res[id3]*3)
                ++id3;
            if(res[i] == res[id5]*5)
                ++id5;
        }

        return res[index-1];
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int cnt=1;
	int n;
	cin>>n;
	cout<<GetUglyNumber_Solution(n);
 	return 0;
}

