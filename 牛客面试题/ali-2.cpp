#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
map<int, vector<int> > mp;
int h[200010],w[200010];
vector<int> v,res;
int judge(set<int> ans){
    int now = -2,cnt=0;
    for(auto i:ans){
        if(i==now+1){
            cnt++;
        }
        now = i;
    }
    return cnt;
}
int main(){
    int n;cin>>n;
    for(int i=0,t;i<n;i++) {
        cin>>t;
        if(v.size()&&v.back()!=t || !v.size()){
            v.push_back(t);
            mp[t].push_back(v.size()-1);
        }
    }
    set<int> ans;
    for(auto i:mp){
        vector<int> t = i.second;
        for(auto j:t){
            ans.insert(j);
        }
        res.push_back(v.size()-judge(ans));
    }
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<" ";
    return 0;
}
