#include<iostream>
#include<string>
#define pii pair<int,int>
#define int long long
#define MP(x,y) make_pair(x,y)
using namespace std;
const int mod = 998244353;
int cnt[4];
int change(char c){
    if(c=='1') return 0;
    if(c=='2') return 1;
    if(c=='4') return 2;
    if(c=='6') return 3;
} 
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
    int n;string s;cin>>n>>s;
    cnt[0]=1;
    if(s.size()==1){
        for(int i=1;i<=n;i++){
            int temp[4]={0};
            temp[0]+=cnt[2];
            temp[1]+=cnt[0];
            temp[2]+=cnt[1]+cnt[3];
            temp[3]+=cnt[3]+cnt[2];
            for(int i=0;i<=3;i++) cnt[i]=temp[i]%mod;
        }
        cout<<cnt[change(s[0])]<<endl;
    }
    if(s.size()==2){
        if(s=="26" and n>2){
            n-=2;
            for(int i=1;i<=n;i++){
                int temp[4]={0};
                temp[0]+=cnt[2];
                temp[1]+=cnt[0];
                temp[2]+=cnt[1]+cnt[3];
                temp[3]+=cnt[3]+cnt[2];
                for(int i=0;i<=3;i++) cnt[i]=temp[i]%mod;
            }
            cout<<cnt[2]<<endl;
        }
        else if(s=="16" and n>1){
            n-=1;
            for(int i=1;i<=n;i++){
                int temp[4]={0};
                temp[0]+=cnt[2];
                temp[1]+=cnt[0];
                temp[2]+=cnt[1]+cnt[3];
                temp[3]+=cnt[3]+cnt[2];
                for(int i=0;i<=3;i++) cnt[i]=temp[i]%mod;
            }
            cout<<cnt[2]<<endl;
        }
        else if(s=="64" and n>1){
            n-=1;
            for(int i=1;i<=n;i++){
                int temp[4]={0};
                temp[0]+=cnt[2];
                temp[1]+=cnt[0];
                temp[2]+=cnt[1]+cnt[3];
                temp[3]+=cnt[3]+cnt[2];
                for(int i=0;i<=3;i++) cnt[i]=temp[i]%mod;
            }
            cout<<cnt[3]<<endl;
        }
        else if(s=="46" and n>3){
            n-=3;
            for(int i=1;i<=n;i++){
                int temp[4]={0};
                temp[0]+=cnt[2];
                temp[1]+=cnt[0];
                temp[2]+=cnt[1]+cnt[3];
                temp[3]+=cnt[3]+cnt[2];
                for(int i=0;i<=3;i++) cnt[i]=temp[i]%mod;
                cout<<endl;
            }
            cout<<cnt[2]<<endl;
        }
        
        else cout<<0<<endl;
    }
    return 0;
}
