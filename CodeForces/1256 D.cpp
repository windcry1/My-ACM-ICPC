#include <bits/stdc++.h>
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define ll long long
using namespace std;
int main(){
    int T;cin>>T;
    while(T--){
        int n;ll k,cnt = 0;
        vector<int> pos;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
            if(s[i]=='0')
                pos.push_back(i);
        for (int i=0;i<pos.size();i++){
            if(!k)
                break;
            if(pos[i]-cnt<=k)
                swap(s[pos[i]],s[cnt]),k-=(pos[i]-cnt),cnt++;
            else
                swap(s[pos[i]],s[pos[i]-k]),k = 0;
        }
        cout<<s<<endl;
    }
	return 0;
}

