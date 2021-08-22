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
    int T;cin>>T;while(T--) {
        int n,w;cin>>n>>w;
        vector<int> a[2];
        for(int i=0;i<n;i++){
            int t;cin>>t;
            a[t%2].push_back(t);
        }
        sort(a[0].begin(),a[0].end());
        sort(a[1].begin(),a[1].end());
        int res=0;
        for(int i=0;i<2;i++) {
        	bool flag[a[i].size()];
        	memset(flag,0,sizeof(flag));
	        for(int l=0;l<a[i].size();l++){
	            if(flag[l]) {
	                continue;
	            }
	            bool ok = 0;
	            for(int r=a[i].size()-1;r>=0;r--) {
	                if (flag[r]){
	                    continue;
	                }
	                if (a[i][l]+a[i][r] <= w){
	                    flag[l] = flag[r] = 1;
	                    ++res;
	                    ok=1;
	                    break;
	                }
	            }
	            if(!ok) ++res;
	        }
		}
        cout<<res<<endl;
    }
    return 0;
}
