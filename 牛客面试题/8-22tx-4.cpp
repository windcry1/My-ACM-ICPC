#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stdlib.h>
#include<string.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;cin>>n>>k;
    string s;cin>>s;
    string res;
    res.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        int ok = 0;
        for(int j=0;j<res.size();j++){
            if(res[j]<s[i] && s.size()-i+j>=k){
                res[j] = s[i];
                while(res.size()!=j+1){
                    res.pop_back();
                }
                ok = 1;
                break;
            }
        }
        if(!ok && res.size()<k)res.push_back(s[i]);
    }
    cout<<res<<endl;
    return 0;
}
