/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/3/2019 3:06:51 PM
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
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
inline char get_ch(int x)
{
    if(x>=0&&x<=9) return x+'0';
    if(x>=10&&x<=15) return x+'a'-10;
}
inline char __(string _)
{
    return get_ch((1<<3)*(_[0]-'0')+(1<<2)*(_[1]-'0')+(1<<1)*(_[2]-'0')+_[3]-'0');
}
 
inline string change(string s)
{
    string temp,res;
    for(int i=0;i<4;i++)
    {
        temp=s.substr(i<<2,1<<2);
        res+=__(temp);
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
    //freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
    int T,times=0;
    cin>>T;
    while(T--)
    {
        int i=0;
        vector<string> v;
        string s;
        cin>>s;
        //cout<<s.length()<<endl;
        while(i!=128)
        {
            string subs=s.substr(i,16);
            v.push_back(change(subs));
            i+=16;
        }
        int cnt=0,t=INF;
        cout<<"Case #"<<++times<<": ";
        int MAX=0;
        for(auto j:v)
            if(j=="0000")
                ++cnt;
            else MAX=max(cnt,MAX),cnt=0;
        MAX=max(cnt,MAX);
        cnt=0;
        for(i=v.size()-1;i>=0;i--)
        {
            if(v[i]=="0000")
                ++cnt;
            else
            {
                if(cnt==MAX&&cnt>=2)
                {
                    t=i;
                    cnt=0;
                    break;
                }
                cnt=0;
            }
        }
        if(cnt==MAX&&cnt>=2)
            t=-1;
        int to=0,first=0;
        for(i=0;i<v.size();i++)
        {
             
            int f=0;
            if(t+1==i) to=1,cout<<':',first=1;
            if(v[i]=="0000"&&to==1) continue;
            if(first)
                cout<<':';
            first=1;
            to=0;
            for(auto k:v[i])
            {
                if(!f&&k=='0') continue;
                f=1;
                cout<<k;
            }
            if(!f) cout<<'0';
        }
        if(to==1) cout<<':';
        cout<<endl;
    }
    return 0;
}
