#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stdlib.h>
#include<string.h>
using namespace std;
#define int long long
#define INTMAX 0x7fffffffffffffff
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
	}
	int ans=INTMAX;
    for(int i=0;i<n;i++){
        int start=i, end=i;
        for(int j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                start--;
            } else {
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                end++;
            } else {
                break;
            }
        }
        int now=a[i], res=0;
        while(start!=0 || end!=n-1){
            int stdj = INTMAX,eddj = INTMAX;
            if(start>0) {
                stdj = abs(a[start-1]-now);
            }
            if(end<n-1) {
                eddj = abs(a[end+1]-now);
            }
            if(stdj > eddj) {
                now = a[end+1];
                res+=eddj;
                end++;
            } else {
                now = a[start-1];
                res+=stdj;
                start--;
            }
        }
        ans = min(ans,res);
    }
    cout<<ans<<endl;
    return 0;
}
